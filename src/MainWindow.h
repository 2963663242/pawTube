#include "CFramelessWindow.h"
#include <QMAP>
class MainWindow :public CFramelessWindow {
	Q_OBJECT
public:
	MainWindow(QWidget* parent = nullptr);
	void sub_46FD00();
private:
	int m48=0;
	int m4c = 0;
	int m50 = 0;
	int m54 = 0;
	int m58 = 0;
	int m5c = 0;
	QList<QString> m60;
	int m64 = 0;
	int m68 = 0;
	int m6c = 0;
	int m70 = 0;
	int m74 = 0;
	int m78 = 0;
	int m7c = 0;
	int m80 = 0;
	int m84 = 0;
	int m88 = 0;
	int m8c = 0;
	int m90 = 0;
	int m94 = 0;
	int m98 = 0;
	int m9c = 0;
	int mA0 = 0;
	int mA4 = 0;
	int mA8 = 0;
	int mAc = 0;
	int mB0 = 0;
	int mB4 = 0;
	bool mB8;
	bool mB9 = 0;
	QMap<QString, QString> mBC;
	QMap<QString, QString> mC0;
};