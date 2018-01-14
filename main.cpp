#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include <zmq.hpp>
#include <unistd.h>
#include <stdio.h>
#include <iostream>
#include <pthread.h>

pthread_mutex_t mtx;
zmq::context_t context(1);
zmq::socket_t publisher(context, ZMQ_PUB);

void sendPublischer( char * buff, int len)
{

    pthread_mutex_lock(&mtx);
    //publisher.send(*msg);
    publisher.send(buff,len,0 );
    pthread_mutex_unlock(&mtx);


}

void * foo(void*)
{
    //zmq::context_t context(1);

    //zmq::socket_t publisher(context, ZMQ_PUB);
    //publisher.bind("tcp://127.0.0.1:6666");
    std::string cam1 = "cam1;Test Publischer";
    std::string cam2 = "cam2;Test Publischer";

    while (1) {

       // zmq::message_t message1((void*)cam1.data(), cam1.size()+1,0);
        //publisher.send(message1);

        zmq::message_t message2((void*)cam2.data(), cam2.size()+1,0);
        //publisher.send(message2);

       // send();

        nanosleep((const struct timespec[]){{1, 0}}, NULL);

    }
}



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;  
    publisher.bind("tcp://127.0.0.1:6666");

    w.show();

    return a.exec();
}




