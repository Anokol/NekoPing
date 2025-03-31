# Copyright (c) 2024 Anokol
# License MIT: https://opensource.org/licenses/MIT

from PyQt5.QtCore import QThread, pyqtSignal
from ping3 import ping

class PingWorker(QThread):
    ping_result = pyqtSignal(tuple)  # (status, rtt, loss_count)

    def __init__(self, ip, packet_size):
        super().__init__()
        self.ip = ip
        self.packet_size = packet_size
        self.running = True

    def run(self):
        while self.running:
            try:
                response_time = ping(
                    self.ip,
                    timeout=1,
                    unit='ms',
                    size=self.packet_size
                )
                status = response_time is not None
                rtt = response_time if status else None
                loss_count = 0 if status else 1
            except Exception as e:
                print(f"Ping error: {e}")
                status, rtt, loss_count = False, None, 1
            self.ping_result.emit((status, rtt, loss_count))
            self.msleep(500)

    def stop(self):
        self.running = False
