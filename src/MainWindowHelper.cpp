#include "MainWindowHelper.h"
#include "MainWindowHelperPrivate.h"
MainWindowHelper::~MainWindowHelper()
{
	delete priv;
}

void MainWindowHelper::setMainWindow(MainWindow* mainWindow)
{
	this->mainWindow = mainWindow;
}

MainWindowHelper::MainWindowHelper(QObject * parent):QObject(parent) {
	MainWindowHelperPrivate* priv = new MainWindowHelperPrivate;
	priv->helper = this;
	priv->mAdjustDotsPer = 1.0;
	this->priv = priv;
}