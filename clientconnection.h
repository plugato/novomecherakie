#ifndef CLIENTCONNECTION_H
#define CLIENTCONNECTION_H

#include <QObject>
#include "chatsocket.h"




class ClientConnection : public QObject
{
    Q_OBJECT
public:
      ClientConnection( int descriptor );

      const ChatSocket * getSocket() const;

      void sendPackage( Package * );

private:
      ChatSocket * m_socket;
      QThread * m_thread;

signals:

public slots:

};

#endif // CLIENTCONNECTION_H
