# Copyright (c) 2024 Anokol
# License MIT: https://opensource.org/licenses/MIT

from PyQt5.QtGui import QIcon, QFontDatabase
from PyQt5.QtWidgets import QDialog, QVBoxLayout, QHBoxLayout, QLabel, QPushButton
from PyQt5.QtCore import Qt, QTimer
from pyqtgraph import PlotWidget, mkPen, BarGraphItem, InfiniteLine
import numpy as np
from time_axis_item import TimeAxisItem
from styles import BACKGROUND_COLOR, FONT_FAMILY, BUTTON_STYLE


class GraphWindow(QDialog):
    def __init__(self, parent=None):
        super().__init__(parent)
        self.setWindowTitle("Мониторинг сети")
        self.setFixedSize(1200, 700)
        self.setWindowIcon(QIcon(':/neko.ico'))
        self.setStyleSheet(f"background-color: {BACKGROUND_COLOR};")

        # Инициализация данных
        self.max_points = 2000
        self.timestamps = np.zeros(self.max_points)
        self.rtt_values = np.zeros(self.max_points)
        self.loss_events = np.zeros(self.max_points, dtype=bool)
        self.current_index = 0
        self.start_time = None

        # Настройка UI
        layout = QVBoxLayout()

        # Панель управления
        control_layout = QHBoxLayout()
        title = QLabel("График RTT")
        title.setStyleSheet(f"color: white; font-family: 'Montserrat'; font-size: 18px;")

        self.reset_btn = QPushButton("В конец")
        self.reset_btn.setStyleSheet(BUTTON_STYLE)
        self.reset_btn.clicked.connect(self.reset_view)

        control_layout.addWidget(title)
        control_layout.addStretch()
        control_layout.addWidget(self.reset_btn)
        layout.addLayout(control_layout)

        # График
        self.time_axis = TimeAxisItem(orientation='bottom')
        self.plot_widget = PlotWidget(axisItems={'bottom': self.time_axis})
        self.plot_widget.setBackground(BACKGROUND_COLOR)
        self.plot_widget.setAntialiasing(True)
        self.plot_widget.showGrid(x=True, y=True, alpha=0.1)

        # Настройка осей
        self.plot_widget.setLabel('bottom', "Время", color='#888')
        self.plot_widget.setLabel('left', "Значение (мс)", color='#888')
        self.plot_widget.getAxis('left').setTextPen('#888')
        self.plot_widget.getAxis('bottom').setTextPen('#888')
        self.plot_widget.setMouseEnabled(x=True, y=False)

        # Элементы графика
        self.rtt_line = self.plot_widget.plot(
            pen=mkPen(color='#00ff9d', width=5, antialias=True),
            antialias=True
        )
        self.loss_bars = BarGraphItem(
            x=[], height=[], width=0.6,
            brush='#ff5555', pen='#cc0000',
        )
        self.x_axis_line = InfiniteLine(pos=0, angle=0, pen='#888')

        self.plot_widget.addItem(self.loss_bars)
        self.plot_widget.addItem(self.x_axis_line)
        layout.addWidget(self.plot_widget)

        self.setLayout(layout)
        self.update_timer = QTimer()
        self.update_timer.timeout.connect(self.update_graph)
        self.update_timer.start(100)
        self.plot_widget.sigXRangeChanged.connect(self.limit_x_range)
        self.auto_scale = True

    def add_data_point(self, timestamp, rtt, loss):
        idx = self.current_index % self.max_points
        self.timestamps[idx] = timestamp
        self.rtt_values[idx] = max(0, rtt) if rtt is not None else 0
        self.loss_events[idx] = loss
        self.current_index += 1
        self.data_full = self.current_index >= self.max_points

        if self.start_time is None:
            self.start_time = timestamp
            self.time_axis.set_base_time(self.start_time)
            self.relative_timestamps = np.zeros(self.max_points)
        self.relative_timestamps[idx] = timestamp - self.start_time

    def update_graph(self):
        if self.start_time is None or self.current_index == 0:
            return

        valid_data = self.max_points if self.data_full else self.current_index
        times = self.relative_timestamps[:valid_data]
        rtts = self.rtt_values[:valid_data]

        self.rtt_line.setData(times, rtts)

        loss_indices = np.where(self.loss_events[:valid_data])[0][-200:]
        if len(loss_indices) > 0:
            bar_x = times[loss_indices]
            bar_height = [rtts[i] / 2 for i in loss_indices]
            self.loss_bars.setOpts(x=bar_x, height=bar_height)
        else:
            self.loss_bars.setOpts(x=[], height=[])

        if self.auto_scale:
            current_time = times[-1] if len(times) > 0 else 0
            valid_rtts = rtts[rtts > 0]
            max_val = max(valid_rtts) * 1.2 if len(valid_rtts) > 0 else 100
            self.plot_widget.setXRange(max(0, current_time - 30), current_time + 2, padding=0)
            self.plot_widget.setYRange(0, max_val, padding=0)

    def reset_view(self):
        if self.current_index == 0:
            return
        valid_data = self.max_points if self.data_full else self.current_index
        times = self.relative_timestamps[:valid_data]
        rtts = self.rtt_values[:valid_data]

        # Исправление: проверка на пустой массив
        valid_rtts = rtts[rtts > 0]
        max_val = max(valid_rtts) * 1.2 if len(valid_rtts) > 0 else 20

        max_time = max(times) if len(times) > 0 else 10
        self.plot_widget.setXRange(0, max_time, padding=0)
        self.plot_widget.setYRange(0, max_val, padding=0)
        self.auto_scale = True

    def limit_x_range(self):
        vb = self.plot_widget.plotItem.vb
        current_range = vb.viewRange()[0]
        new_start = max(0, current_range[0])
        new_end = max(new_start + 1, current_range[1])
        vb.setXRange(new_start, new_end, padding=0)
        self.auto_scale = False
