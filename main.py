# Copyright (c) 2024 Anokol
# License MIT: https://opensource.org/licenses/MIT
# mua

import sys
import resources_rc
from PyQt5.QtWidgets import QApplication, QWidget, QVBoxLayout, QHBoxLayout, QLineEdit, QListWidget, QScrollArea, \
    QAbstractItemView, QPushButton, QListWidgetItem
from PyQt5.QtGui import QFontDatabase, QIcon
from PyQt5.QtGui import QFont
from PyQt5.QtCore import Qt
from ip_container import IpContainer

from styles import BACKGROUND_COLOR, INPUT_STYLE, SCROLL_STYLE, FONT_FAMILY, BUTTON_STYLE


class MainWindow(QWidget):
    def __init__(self):
        super().__init__()
        self.setWindowIcon(QIcon(':/neko.ico'))
        self.init_ui()
        self.setWindowTitle("Neko ping")
        self.resize(600, 750)
        self.setMinimumWidth(600)

    def init_ui(self):
        QFontDatabase.addApplicationFont("Montserrat")
        self.setStyleSheet(f"background-color: {BACKGROUND_COLOR}; color: white;")
        layout = QVBoxLayout()
        layout.setContentsMargins(20, 20, 20, 20)
        layout.setSpacing(15)

        self.ip_input = self.create_input("IP-адрес")
        self.name_input = self.create_input("Имя (необязательно)")
        self.packet_size_input = self.create_input("Размер пакета (байт)")
        self.ip_input.returnPressed.connect(self.add_ip)
        self.name_input.returnPressed.connect(self.add_ip)
        self.packet_size_input.returnPressed.connect(self.add_ip)

        self.add_btn = self.create_button("Добавить", self.add_ip)
        self.clear_btn = self.create_button("Очистить все", self.clear_all)

        self.scroll_area = QScrollArea()
        self.scroll_area.setStyleSheet(SCROLL_STYLE)
        self.scroll_area.setWidgetResizable(True)

        self.list_widget = QListWidget()
        self.list_widget.setStyleSheet("""
            QListWidget {
                background: transparent;
                border: none;
            }
            QListWidget::item {
                background: #383838;
                border-radius: 10px;
                margin: 5px 0;
            }
        """)
        self.list_widget.setVerticalScrollMode(QAbstractItemView.ScrollPerPixel)
        self.scroll_area.setWidget(self.list_widget)

        layout.addWidget(self.ip_input)
        layout.addWidget(self.name_input)
        layout.addWidget(self.packet_size_input)
        layout.addWidget(self.add_btn)
        layout.addWidget(self.scroll_area)
        layout.addWidget(self.clear_btn)
        self.setLayout(layout)

    def create_input(self, placeholder):
        line_edit = QLineEdit()
        line_edit.setPlaceholderText(placeholder)
        line_edit.setStyleSheet(INPUT_STYLE)
        line_edit.setFont(QFont(FONT_FAMILY, 10))
        return line_edit

    def create_button(self, text, callback):
        btn = QPushButton(text)
        btn.setStyleSheet(BUTTON_STYLE)
        btn.setFont(QFont(FONT_FAMILY, 10))
        btn.clicked.connect(callback)
        return btn

    def add_ip(self):
        ip = self.ip_input.text().strip()
        name = self.name_input.text().strip() or "Без имени"
        packet_size = self.packet_size_input.text().strip() or "64"

        if not ip:
            return

        try:
            packet_size = int(packet_size)
        except ValueError:
            return

        item = QListWidgetItem()
        container = IpContainer(ip, name, packet_size, self)
        item.setSizeHint(container.sizeHint())
        self.list_widget.addItem(item)
        self.list_widget.setItemWidget(item, container)

        self.ip_input.clear()
        self.name_input.clear()
        self.packet_size_input.clear()

    def clear_all(self):
        self.list_widget.clear()

    def remove_item(self, widget):
        for i in range(self.list_widget.count()):
            item = self.list_widget.item(i)
            if self.list_widget.itemWidget(item) == widget:
                self.list_widget.takeItem(i)
                widget.deleteLater()
                break


if __name__ == "__main__":
    app = QApplication(sys.argv)
    window = MainWindow()
    window.show()
    sys.exit(app.exec_())
