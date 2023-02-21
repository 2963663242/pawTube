#include "LanguageSettings.h"
#include <QCoreApplication>
LanguageSettings::LanguageSettings(QObject* parent) :QObject(parent)
{
	LanguageSettingsPrivate* pri =new  LanguageSettingsPrivate;
	pri->settings = this;
	this->pri = pri;
}

LanguageSettingsPrivate::LanguageSettingsPrivate()
{
	languages.append(QObject::tr("English", 0, -1));
	languages.append(QObject::tr("Chinese(Traditional)", 0, -1));
	languages.append(QObject::tr("Italian", 0, -1));
	languages.append(QObject::tr("French", 0, -1));
	languages.append(QObject::tr("Spanish", 0, -1));
	languages.append(QObject::tr("Portuguese", 0, -1));
	languages.append(QObject::tr("Japanese", 0, -1));
	translator = new QTranslator(settings);
	QCoreApplication::installTranslator(translator);
}

LanguageSettings* getLanSettings() {
	static LanguageSettings lanSettings;
	return &lanSettings;
}
