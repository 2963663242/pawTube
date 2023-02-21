#include "MainWindow.h"
#include "MainWindowHelper.h"
#include "LanguageSettings.h"
MainWindow::MainWindow(QWidget* parent):CFramelessWindow(parent) {
	static MainWindowHelper helper;
	helper.setMainWindow(this);
}

void MainWindow::sub_46FD00()
{
	LanguageSettings* settings =  getLanSettings();

	QObject::connect()
}
