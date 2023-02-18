#include "CFramelessWindow.h"
#include <Windows.h>
#include <dwmapi.h>
CFramelessWindow::CFramelessWindow(QWidget* parent):QMainWindow(parent) {
	setWindowFlags(Qt::FramelessWindowHint|Qt::WindowMinimizeButtonHint|Qt::WindowMaximizeButtonHint);
	QWidgetData * data = *((QWidgetData**)((byte *)this + 0x14));
	bool visiable = (data->widget_attributes >> 0xF) & 0x1;
	Qt::WindowFlags flags = data->window_flags;
	HWND winid;
	LONG windowLong;
	MARGINS MarInset = { 1,1,1,1 };
	if(m45){
			setWindowFlags(flags | Qt::WindowMaximizeButtonHint);
			winid = (HWND)winId();
			windowLong = GetWindowLongW(winid, GWL_STYLE);
			windowLong |=  WS_CAPTION | WS_SIZEBOX | WS_MAXIMIZEBOX;
	}
	else{

		setWindowFlags((Qt::WindowFlags)(flags | 0x0FFFF7FFF));
		winid = (HWND)winId();
		windowLong = GetWindowLongW(winid, GWL_STYLE);
		windowLong &= 0xFF3EFFFF;
	}
	SetWindowLongW(winid, GWL_STYLE, windowLong );
	DwmExtendFrameIntoClientArea((HWND)winId(), &MarInset);
	this->setVisible(visiable);

}