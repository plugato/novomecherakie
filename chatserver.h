#ifndef CHATSERVER_H
#define CHATSERVER_H
#include "package.h"
#include "clientconnection.h"
#include "sendmessagepackage.h"


#include <QTcpServer>



class ChatServer : public QTcpServer
{
    Q_OBJECT
public:
    explicit ChatServer(QObject *parent = 0);


protected:
    void incomingConnection(  int descriptor );
public:

    class SendMessagePackage{


        public:

        SendMessagePackage(){

        }


        QHostAddress receiverAddress(  ClientConnection * g){
            return QHostAddress( g->getSocket()->peerAddress() );
        }


        QHostAddress senderAddress(){
            return QHostAddress(2);
        }

        QByteArray message()
        {
            return QByteArray("1");
        }

    };


    ClientConnection *c;

private:
    QList< ClientConnection *> m_connections;
    void handleSendMessagePackage( SendMessagePackage * p);



signals:

public slots:
     void handlePackage( Package * p );

};

#endif // CHATSERVER_H
