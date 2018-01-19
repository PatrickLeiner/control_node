#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <zmq.hpp>
#include <string>

extern void sendPublischer( char * buff, int len);
extern int sendAuth( char command, zmq::message_t *response);

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);

   ui->stackedWidget->setStyleSheet("\
                                    QPushButton:checked{\
                                        background-color: green;\
                                        border: none; \
                                    } \
                                    QPushButton:unchecked{\
                                        background-color: gray;\
                                        border: none; \
                                    } ");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_authentication_clicked() //request authentication if pressed
{
    //todo if authentication is true    
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_toolButton_clicked() //change to settings widget
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_buttonBox_accepted() //ok button of settings widget
{
    //todo if settings have to be saved or not...
    ui->stackedWidget->setCurrentIndex(1);

    sendCam(1);
    sendCam(2);
    sendCam(3);
    sendCam(4);

}

std::string newState(QPushButton *button)
{

    if(button->isChecked())
    {
        return "start";
    }
    else
    {
        return "stop";
    }

}

std::string getSetting( QGroupBox *groupBox)
{

    QListIterator<QObject *> list(groupBox->children());
    QString objName;
    std::string setting = "";

    while (list.hasNext())
    {

        QRadioButton* b = dynamic_cast<QRadioButton*>( list.next() );
            if (b != NULL){
              if(b->isChecked())
              {
                objName = b->objectName();

                if( std::string::npos != b->objectName().toStdString().find("_1_"))
                {
                    setting = "set1";
                }
                else if (std::string::npos != b->objectName().toStdString().find("_2_"))
                {
                    setting = "set2";
                }
                else if (std::string::npos != b->objectName().toStdString().find("_3_"))
                {
                    setting = "set3";
                }
                else if (std::string::npos != b->objectName().toStdString().find("_4_"))
                {
                    setting = "set4";
                }
                break;
               }
            }
    }

    return setting;

}

void MainWindow::sendCam(int cam)
{
    std::string command = "cam";
    std::string state;
    std::string settings;
    QString testDeb;

    if(cam >0 && cam < 5)
    {

        command = command + std::to_string(cam);

        switch(cam)
        {
            case 1: state = newState(ui->pushButton_Cam1);break;
            case 2: state = newState(ui->pushButton_Cam2);break;
            case 3: state = newState(ui->pushButton_Cam3);break;
            case 4: state = newState(ui->pushButton_Cam4);break;
        }

        command = command + ';' + state;

        switch(cam)
        {
            case 1: settings = getSetting(ui->groupBox_Cam1 );break;
            case 2: settings = getSetting(ui->groupBox_Cam2 );break;
            case 3: settings = getSetting(ui->groupBox_Cam3 );break;
            case 4: settings = getSetting(ui->groupBox_Cam4 );break;
        }

        command = command + ';' + settings;

        testDeb += QString::fromStdString(command);
        ui->textEdit->append(testDeb );

        sendPublischer((char*)command.data(), command.size()+1);

    }

}

void MainWindow::on_pushButton_Cam1_clicked()
{
    this->sendCam(1);
}


void MainWindow::on_pushButton_Cam2_clicked()
{
    this->sendCam(2);
}

void MainWindow::on_pushButton_Cam3_clicked()
{
    this->sendCam(3);
}

void MainWindow::on_pushButton_Cam4_clicked()
{
    this->sendCam(4);
}

void MainWindow::on_pushButton_clicked()
{
    zmq::message_t response(2);
    QString testDeb;
    char *buff;
    std::string byteStreamZiffer = "";
    int res;

    res = sendAuth(1, &response);

    if(errno != 0)
    {
    testDeb += QString::fromStdString(  zmq_strerror (errno) );
    }

    ui->textEdit->append(testDeb );
    testDeb.clear();
    if(res > 0)
    {
        buff = (char*) response.data();
        byteStreamZiffer = std::to_string( buff[0]) + std::to_string( buff[1])  ;
    }

    testDeb += QString::fromStdString(byteStreamZiffer);
    ui->textEdit->append(testDeb );

}

void MainWindow::on_pushButton_Cam4_2_clicked()
{
    zmq::message_t response(2);
    QString testDeb;
    char *buff;
    std::string byteStreamZiffer = "";
    int res;

    res = sendAuth(2, &response);

    if(errno != 0)
    {
    testDeb += QString::fromStdString(  zmq_strerror (errno) );
    }

    ui->textEdit->append(testDeb );
    testDeb.clear();
    if(res > 0)
    {
        buff = (char*) response.data();
        byteStreamZiffer = std::to_string( buff[0]) + std::to_string( buff[1])  ;
    }

    testDeb += QString::fromStdString(byteStreamZiffer);
    ui->textEdit->append(testDeb );

}
