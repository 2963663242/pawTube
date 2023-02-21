#include <QObject>
#include <QList>
#include <QString>
#include <QTranslator>
class LanguageSettingsPrivate;
class LanguageSettings :public QObject {
	Q_OBJECT
public:
	LanguageSettings(QObject* parent = nullptr);
	LanguageSettingsPrivate* pri;
signals:
	void languageChanged();
};

class LanguageSettingsPrivate {


public:
	LanguageSettingsPrivate();
	LanguageSettings* settings;
	QTranslator* translator = 0;
	QList<QString> languages;
};


LanguageSettings* getLanSettings();