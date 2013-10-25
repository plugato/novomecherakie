#include <QTcpServer>
#include <QTcpSocket>
#include "clientconnection.h"
#include "QThread"



ClientConnection::ClientConnection( int descriptor)
{
    m_thread = new QThread();

    m_socket = new ChatSocket( descriptor );
    m_socket->setSocketDescriptor( descriptor );
    m_socket->moveToThread( m_thread );

    m_thread->start();
}

const ChatSocket *ClientConnection::getSocket() const
{
    return m_socket;
}

void ClientConnection::sendPackage( Package * p )
{
   //QMetaObject::invokeMethod( m_socket, "writePackage", Qt::QueuedConnection, Q_ARG( QByteArray, PackageBuilder::buildPackage( p ) ) );
}
