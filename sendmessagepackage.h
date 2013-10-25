#ifndef SENDMESSAGEPACKAGE_H
#define SENDMESSAGEPACKAGE_H


#include "QTcpSocket"
#include "chatserver.h"



class SendMessagePackage : public Package
{
    Q_OBJECT
public:
    SendMessagePackage();




    QHostAddress receiverAddress();
    QHostAddress senderAddress();
    QByteArray   message();
};

#endif // SENDMESSAGEPACKAGE_H
