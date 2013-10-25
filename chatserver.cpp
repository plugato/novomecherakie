#include "chatserver.h"
#include "clientconnection.h"
#include "sendmessagepackage.h"

ChatServer::ChatServer(QObject *parent) :
    QTcpServer(parent)
{

}

void ChatServer::incomingConnection(int descriptor)
{
    //ClientConnection *c = new ClientConnection( descriptor );
    c = new ClientConnection( descriptor );

    connect( c->getSocket(), &ChatSocket::newPackage,  this, &ChatServer::handlePackage );
}

void ChatServer::handlePackage( Package *p ){

    if( p->type() == Package::Message )
        handleSendMessagePackage( reinterpret_cast< SendMessagePackage * >( p ) );


}


void ChatServer::handleSendMessagePackage( SendMessagePackage * p ){



  QHostAddress addr = p->receiverAddress( c );

  emit ChatSocket::newPackage( reinterpret_cast< Package  >( *p ) );
  for( int n = 0; n < m_connections.size(); ++n )
  {
     if( m_connections[ n ]->getSocket()->localAddress() == addr ){
        //sendMessageToClient( m_connections[ n ], p->senderAddres(), p->message() );
     }
          //if( m_connections[ n ]->getSocket()){}
          //sendMessageToClient( m_connections[ n ], p->senderAddres(), p->message() );
  }
}


