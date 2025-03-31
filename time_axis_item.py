# Copyright (c) 2024 Anokol
# License MIT: https://opensource.org/licenses/MIT

from pyqtgraph import AxisItem
from datetime import datetime

class TimeAxisItem(AxisItem):
    def __init__(self, *args, **kwargs):
        super().__init__(*args, **kwargs)
        self.base_time = None

    def set_base_time(self, base_time):
        self.base_time = base_time

    def tickStrings(self, values, scale, spacing):
        if self.base_time is None:
            return ["" for _ in values]
        return [
            (datetime.fromtimestamp(self.base_time + value)).strftime("%H:%M:%S")
            for value in values
        ]
