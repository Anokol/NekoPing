from PyQt5.QtGui import QColor
from PyQt5.QtGui import QFont

BACKGROUND_COLOR = "#2c2c2c"
CONTAINER_BG = "#383838"
TEXT_COLOR = "white"
PRIMARY_GREEN = "#4CAF50"
PRIMARY_RED = "#F44336"

BUTTON_STYLE = """
    QPushButton {
        background: #383838;
        color: white;
        border-radius: 6px;
        padding: 8px 20px;
    }
    QPushButton:hover { background: #484848; }
"""

INPUT_STYLE = """
    QLineEdit {
        background: #383838;
        border: none;
        border-radius: 6px;
        padding: 8px;
        color: white;
    }
"""

SCROLL_STYLE = """
    QScrollArea { 
        border: none; 
        background: transparent;
    }
    QScrollBar:vertical {
        border: none;
        background: #2c2c2c;
        width: 10px;
        margin: 2;
        padding: 0;
        border-radius: 10px;
    }
    QScrollBar::handle:vertical {
        background: #383838;
        min-height: 20px;
        border-radius: 20px;
    }
    QScrollBar::add-line:vertical,
    QScrollBar::sub-line:vertical,
    QScrollBar::add-page:vertical,
    QScrollBar::sub-page:vertical {
        background: none;
        border: none;
    }
"""

FONT_FAMILY = "Montserrat"