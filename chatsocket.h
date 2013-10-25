#ifndef CHATSOCKET_H
#define CHATSOCKET_H

#include <QTcpSocket>
#include <package.h>




class ChatSocket : public QTcpSocket
{
    Q_OBJECT
public:
    ChatSocket( int descriptor  );

signals:
    void newPackage( Package * );

public slots:

};


#endif // CHATSOCKET_H
