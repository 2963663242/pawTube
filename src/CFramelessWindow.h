#include <QMainWindow>
#include <QList>
class CFramelessWindow:public QMainWindow {
	
public:
		CFramelessWindow(QWidget* parent = nullptr);
private:
	int m18=0;
	QList<QString> m1c;
	int m20=5;
	int m24=0;
	int m28=0;
};