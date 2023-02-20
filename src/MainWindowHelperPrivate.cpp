#include "MainWindowHelperPrivate.h"
#include <QGuiApplication>
#include <QScreen>
#include <QString>
#include <qDebug>
MainWindowHelperPrivate::MainWindowHelperPrivate()
{
	double result;
	double DotsPerInch = QGuiApplication::primaryScreen()->logicalDotsPerInch();
	
	if (1.1 > DotsPerInch / 96.0) {
		result = 1.0;
	}
	else if (1.4 > DotsPerInch / 96.0) {
		result = 1.25;
	}
	else if (1.6 > DotsPerInch / 96.0) {
		result = 1.5;
	}
	else if (1.8 > DotsPerInch / 96.0) {
		result = 1.75;
	}
	else {
		result = 2.0;
	}
	mAdjustDotsPer = result;

	QString str = QString("system dpi: %1, converted: %2, adjusted: %3").arg(DotsPerInch, 0, 'g', -1,' ');
	str = str.arg(DotsPerInch / 96.0, 0, 'g', -1, ' ');
	str = str.arg(mAdjustDotsPer, 0, 'g', -1, ' ');
	qDebug() << str;
}
