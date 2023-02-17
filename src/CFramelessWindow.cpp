#include "CFramelessWindow.h"

CFramelessWindow::CFramelessWindow(QWidget* parent):QMainWindow(parent) {
	setWindowFlags(Qt::FramelessWindowHint|Qt::WindowMinimizeButtonHint|Qt::WindowMaximizeButtonHint);


}