#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "chatserver.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ChatServer *listening = new ChatServer;//listen();

    listening->listen(QHostAddress::Any,666);


    //listening->
    //ChatSocket *s = new ChatSocket;


                //emit ChatSocket::newPackage( *p );



    ui->textEdit->append("S");

}

MainWindow::~MainWindow()
{
    delete ui;
}
