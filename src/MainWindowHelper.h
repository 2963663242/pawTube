#include <QObject>
class MainWindow;
class MainWindowHelperPrivate;
class MainWindowHelper :public QObject {
	Q_OBJECT
public:
	MainWindowHelper(QObject *parent=nullptr);
	~MainWindowHelper();
	void setMainWindow(MainWindow* mainWindow);
private:

	MainWindowHelperPrivate* priv;
	MainWindow* mainWindow;
};
