#include "sendmessagepackage.h"


SendMessagePackage::SendMessagePackage(){

}


QHostAddress SendMessagePackage::receiverAddress(){
    return QHostAddress(2);
}


QHostAddress SendMessagePackage::senderAddress(){
    return QHostAddress(2);
}

QByteArray SendMessagePackage::message()
{

}





