/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -v -c DBusNokiaMediaPlayerIf -p dbusnokiamediaplayerif.h:dbusnokiamediaplayerif.cpp com.nokia.mediaplayer.xml
 *
 * qdbusxml2cpp is Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef DBUSNOKIAMEDIAPLAYERIF_H_1396374440
#define DBUSNOKIAMEDIAPLAYERIF_H_1396374440

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface com.nokia.mediaplayer
 */
class DBusNokiaMediaPlayerIf: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "com.nokia.mediaplayer"; }

public:
    DBusNokiaMediaPlayerIf(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~DBusNokiaMediaPlayerIf();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> mime_open(const QString &file)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(file);
        return asyncCallWithArgumentList(QLatin1String("mime_open"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

namespace com {
  namespace nokia {
    typedef ::DBusNokiaMediaPlayerIf mediaplayer;
  }
}
#endif