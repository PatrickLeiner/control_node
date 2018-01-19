#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include <zmq.hpp>
#include <unistd.h>
#include <stdio.h>
#include <iostream>
#include <pthread.h>

pthread_mutex_t mtxPublischer;
pthread_mutex_t mtxAuth;

zmq::context_t context(1);
zmq::context_t contAuth(1);
zmq::socket_t publisher(context, ZMQ_PUB);
zmq::socket_t requester(contAuth, ZMQ_REQ);

//
// Function sendPublischer( )
// send data to depending subscriber
//
void sendPublischer( char * buff, int len)
{
    pthread_mutex_lock(&mtxPublischer);
    publisher.send(buff,len,0 );
    pthread_mutex_unlock(&mtxPublischer);

}
//
// Function sendAuth(  )
// send request to authentication_node
// get reply from authentication_node
// reply true if authenticated
// reply false if not
//
int sendAuth( char command, zmq::message_t *response)
{
    //zmq_pollitem_t items [1];
    int rc = 0;

    pthread_mutex_lock(&mtxAuth);


    requester.send(&command,1,0);

    rc = requester.recv(response,0);

    //
    // Timeout Prototype who didn´t work
    //

    //if(rc >= 0)
   // {
   //     items[0].socket = (void*)requester;
   //     items[0].events = ZMQ_POLLIN;

    //    rc = zmq_poll (&items [0], 1, 1000); // Timeout einstellen

    //    if (items [0].revents & ZMQ_POLLIN) {
    //                requester.recv(response,2,0);
     //          }

  //  }

    pthread_mutex_unlock(&mtxAuth);

    return rc;

}


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    // create local publisher on port 6666
    publisher.bind("tcp://*:6666");

    // connect to authentication_node
    //requester.connect("tcp://10.0.0.2:6664");
    requester.connect("tcp://127.0.0.1:6664");

    w.show();

    return a.exec();
}
