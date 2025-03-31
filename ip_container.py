# Copyright (c) 2024 Anokol
# License MIT: https://opensource.org/licenses/MIT

import time

import numpy as np
from PyQt5.QtWidgets import QWidget, QHBoxLayout, QVBoxLayout, QLabel, QPushButton, QGraphicsColorizeEffect, \
    QApplication
from PyQt5.QtCore import Qt, QSize
from PyQt5.QtGui import QIcon, QFont, QColor, QCursor
from ping_worker import PingWorker
from graph_window import GraphWindow
from styles import CONTAINER_BG, PRIMARY_GREEN, PRIMARY_RED, FONT_FAMILY, BUTTON_STYLE
from PyQt5.QtGui import QFont


class IpContainer(QWidget):
    def __init__(self, ip, name, packet_size, main_window, parent=None):
        super().__init__(parent)
        self.main_window = main_window
        self.ip = ip
        self.name = name
        self.packet_size = packet_size
        self.timestamps = []
        self.rtt_values = []
        self.loss_events = []
        self.init_ui()
        self.start_ping()

    def init_ui(self):
        self.setStyleSheet(f"background-color: {CONTAINER_BG}; border-radius: 6px; padding: 10px;")
        layout = QHBoxLayout()
        left_layout = QVBoxLayout()
        left_layout.setSpacing(8)

        # Строка статуса
        status_layout = QHBoxLayout()
        self.ip_label = QLabel(f"IP: {self.ip}")
        self.status_label = QLabel("ST: Проверка...")
        self.indicator = QLabel()
        self.indicator.setFixedSize(10, 10)
        self.indicator.setStyleSheet("background: black; border-radius: 5px;")
        status_layout.addWidget(self.ip_label)
        status_layout.addWidget(self.status_label)
        status_layout.addWidget(self.indicator)
        status_layout.addStretch()

        # Имя
        self.name_label = QLabel(f"Имя: {self.name}")

        # Показатели
        metrics_layout = QHBoxLayout()
        self.rtt_label = QLabel("RTT: ---")
        self.loss_count_label = QLabel("Потеряно: 0")
        self.loss_percent_label = QLabel("Потери: 0.0%")
        metrics_layout.addWidget(self.rtt_label)
        metrics_layout.addWidget(self.loss_count_label)
        metrics_layout.addWidget(self.loss_percent_label)
        metrics_layout.addStretch()

        left_layout.addLayout(status_layout)
        left_layout.addWidget(self.name_label)
        left_layout.addLayout(metrics_layout)

        # Кнопки
        icon_layout = QVBoxLayout()
        icon_layout.setSpacing(10)
        self.copy_btn = self.create_icon_button(":/resources/copy-alt.ico", self.copy_ip)
        self.delete_btn = self.create_icon_button(":/resources/trash.ico", self.delete_container)
        self.chart_btn = self.create_icon_button(":/resources/chart-histogram.ico", self.show_graph_window)
        icon_layout.addWidget(self.copy_btn)
        icon_layout.addWidget(self.delete_btn)
        icon_layout.addWidget(self.chart_btn)
        icon_layout.addStretch()

        layout.addLayout(left_layout)
        layout.addLayout(icon_layout)
        self.setLayout(layout)

        # Стили
        labels = [self.ip_label, self.status_label, self.name_label,
                  self.rtt_label, self.loss_count_label, self.loss_percent_label]
        for label in labels:
            label.setStyleSheet("color: white;")
            label.setFont(QFont('Montserrat', 10))

    def create_icon_button(self, icon_path, callback):
        btn = QPushButton()
        btn.setIcon(QIcon(icon_path))
        btn.setIconSize(QSize(20, 20))
        color_effect = QGraphicsColorizeEffect()
        color_effect.setColor(QColor(150, 150, 150))
        btn.setGraphicsEffect(color_effect)
        btn.setCursor(QCursor(Qt.PointingHandCursor))
        btn.setStyleSheet("QPushButton { background: transparent; border: none; }"
                          "QPushButton:hover { background: rgba(255, 255, 255, 20); }")
        btn.clicked.connect(callback)
        return btn

    def start_ping(self):
        self.worker = PingWorker(self.ip, self.packet_size)
        self.worker.ping_result.connect(self.update_status)
        self.worker.start()

    def update_status(self, data):
        status, rtt, loss_count = data
        timestamp = time.time()

        self.timestamps.append(timestamp)
        self.rtt_values.append(rtt if status else None)
        self.loss_events.append(loss_count)

        if len(self.timestamps) > 2000:
            self.timestamps.pop(0)
            self.rtt_values.pop(0)
            self.loss_events.pop(0)

        color = PRIMARY_GREEN if status else PRIMARY_RED
        self.indicator.setStyleSheet(f"background-color: {color}; border-radius: 5px;")
        self.status_label.setText(f"ST: {'Online' if status else 'Offline'}")
        self.rtt_label.setText(f"RTT: {rtt:.1f} мс" if rtt else "RTT: ---")
        self.loss_count_label.setText(f"Потеряно: {sum(self.loss_events)}")
        total = len(self.timestamps)
        loss_percent = (sum(self.loss_events) / total * 100) if total else 0
        self.loss_percent_label.setText(f"Потери: {loss_percent:.1f}%")

        if hasattr(self, 'graph_window') and self.graph_window.isVisible():
            self.graph_window.add_data_point(timestamp, rtt, loss_count)

    def copy_ip(self):
        QApplication.clipboard().setText(self.ip)

    def delete_container(self):
        self.worker.stop()
        self.worker.quit()
        self.worker.wait()
        self.main_window.remove_item(self)

    def show_graph_window(self):
        if not hasattr(self, 'graph_window'):
            self.graph_window = GraphWindow()
            timestamps = np.array(self.timestamps)
            rtts = np.array([max(0, r) if r is not None else 0 for r in self.rtt_values])
            losses = np.array(self.loss_events)

            for i in range(len(timestamps)):
                self.graph_window.add_data_point(timestamps[i], rtts[i], losses[i])

        self.graph_window.show()
        self.graph_window.reset_view()
