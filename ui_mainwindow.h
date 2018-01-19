/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QStackedWidget>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *page_1;
    QPushButton *pushButton_authentication;
    QWidget *page_2;
    QPushButton *pushButton_Cam1;
    QPushButton *pushButton_Cam2;
    QPushButton *pushButton_Cam3;
    QPushButton *pushButton_Cam4;
    QToolButton *toolButton;
    QPushButton *pushButton_new_fingerprint;
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QWidget *page_3;
    QDialogButtonBox *buttonBox;
    QTabWidget *tabWidget;
    QWidget *Tab_Cam1;
    QGroupBox *groupBox_Cam1;
    QRadioButton *radioButton_1_Cam1;
    QRadioButton *radioButton_2_Cam1;
    QRadioButton *radioButton_3_Cam1;
    QRadioButton *radioButton_4_Cam1;
    QWidget *Tab_Cam2;
    QGroupBox *groupBox_Cam2;
    QRadioButton *radioButton_1_Cam2;
    QRadioButton *radioButton_2_Cam2;
    QRadioButton *radioButton_3_Cam2;
    QRadioButton *radioButton_4_Cam2;
    QWidget *Tab_Cam3;
    QGroupBox *groupBox_Cam3;
    QRadioButton *radioButton_1_Cam3;
    QRadioButton *radioButton_2_Cam3;
    QRadioButton *radioButton_3_Cam3;
    QRadioButton *radioButton_4_Cam3;
    QWidget *Tab_Cam4;
    QGroupBox *groupBox_Cam4;
    QRadioButton *radioButton_1_Cam4;
    QRadioButton *radioButton_2_Cam4;
    QRadioButton *radioButton_3_Cam4;
    QRadioButton *radioButton_4_Cam4;
    QWidget *page_4;
    QPushButton *pushButton_denied;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(320, 238);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 320, 240));
        page_1 = new QWidget();
        page_1->setObjectName(QString::fromUtf8("page_1"));
        pushButton_authentication = new QPushButton(page_1);
        pushButton_authentication->setObjectName(QString::fromUtf8("pushButton_authentication"));
        pushButton_authentication->setEnabled(true);
        pushButton_authentication->setGeometry(QRect(0, 0, 320, 240));
        pushButton_authentication->setIconSize(QSize(320, 240));
        pushButton_authentication->setCheckable(false);
        stackedWidget->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        pushButton_Cam1 = new QPushButton(page_2);
        pushButton_Cam1->setObjectName(QString::fromUtf8("pushButton_Cam1"));
        pushButton_Cam1->setGeometry(QRect(10, 10, 105, 51));
        pushButton_Cam1->setCheckable(true);
        pushButton_Cam1->setChecked(false);
        pushButton_Cam2 = new QPushButton(page_2);
        pushButton_Cam2->setObjectName(QString::fromUtf8("pushButton_Cam2"));
        pushButton_Cam2->setGeometry(QRect(10, 70, 105, 41));
        pushButton_Cam2->setCheckable(true);
        pushButton_Cam2->setChecked(false);
        pushButton_Cam3 = new QPushButton(page_2);
        pushButton_Cam3->setObjectName(QString::fromUtf8("pushButton_Cam3"));
        pushButton_Cam3->setGeometry(QRect(125, 10, 105, 51));
        pushButton_Cam3->setCheckable(true);
        pushButton_Cam3->setChecked(false);
        pushButton_Cam4 = new QPushButton(page_2);
        pushButton_Cam4->setObjectName(QString::fromUtf8("pushButton_Cam4"));
        pushButton_Cam4->setGeometry(QRect(120, 70, 105, 41));
        pushButton_Cam4->setCheckable(true);
        pushButton_Cam4->setChecked(false);
        toolButton = new QToolButton(page_2);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(240, 10, 70, 105));
        pushButton_new_fingerprint = new QPushButton(page_2);
        pushButton_new_fingerprint->setObjectName(QString::fromUtf8("pushButton_new_fingerprint"));
        pushButton_new_fingerprint->setGeometry(QRect(240, 179, 70, 51));
        pushButton_new_fingerprint->setCheckable(false);
        pushButton_new_fingerprint->setChecked(false);
        pushButton = new QPushButton(page_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(240, 120, 71, 51));
        textEdit = new QTextEdit(page_2);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 120, 211, 101));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        buttonBox = new QDialogButtonBox(page_3);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(75, 205, 170, 25));
        buttonBox->setLayoutDirection(Qt::RightToLeft);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        tabWidget = new QTabWidget(page_3);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 300, 185));
        Tab_Cam1 = new QWidget();
        Tab_Cam1->setObjectName(QString::fromUtf8("Tab_Cam1"));
        groupBox_Cam1 = new QGroupBox(Tab_Cam1);
        groupBox_Cam1->setObjectName(QString::fromUtf8("groupBox_Cam1"));
        groupBox_Cam1->setGeometry(QRect(0, 0, 150, 155));
        radioButton_1_Cam1 = new QRadioButton(groupBox_Cam1);
        radioButton_1_Cam1->setObjectName(QString::fromUtf8("radioButton_1_Cam1"));
        radioButton_1_Cam1->setGeometry(QRect(10, 30, 140, 23));
        radioButton_1_Cam1->setChecked(true);
        radioButton_2_Cam1 = new QRadioButton(groupBox_Cam1);
        radioButton_2_Cam1->setObjectName(QString::fromUtf8("radioButton_2_Cam1"));
        radioButton_2_Cam1->setGeometry(QRect(10, 60, 140, 23));
        radioButton_3_Cam1 = new QRadioButton(groupBox_Cam1);
        radioButton_3_Cam1->setObjectName(QString::fromUtf8("radioButton_3_Cam1"));
        radioButton_3_Cam1->setGeometry(QRect(10, 90, 140, 23));
        radioButton_4_Cam1 = new QRadioButton(groupBox_Cam1);
        radioButton_4_Cam1->setObjectName(QString::fromUtf8("radioButton_4_Cam1"));
        radioButton_4_Cam1->setGeometry(QRect(10, 120, 140, 23));
        tabWidget->addTab(Tab_Cam1, QString());
        Tab_Cam2 = new QWidget();
        Tab_Cam2->setObjectName(QString::fromUtf8("Tab_Cam2"));
        groupBox_Cam2 = new QGroupBox(Tab_Cam2);
        groupBox_Cam2->setObjectName(QString::fromUtf8("groupBox_Cam2"));
        groupBox_Cam2->setGeometry(QRect(0, 0, 150, 155));
        radioButton_1_Cam2 = new QRadioButton(groupBox_Cam2);
        radioButton_1_Cam2->setObjectName(QString::fromUtf8("radioButton_1_Cam2"));
        radioButton_1_Cam2->setGeometry(QRect(10, 30, 140, 23));
        radioButton_1_Cam2->setChecked(true);
        radioButton_2_Cam2 = new QRadioButton(groupBox_Cam2);
        radioButton_2_Cam2->setObjectName(QString::fromUtf8("radioButton_2_Cam2"));
        radioButton_2_Cam2->setGeometry(QRect(10, 60, 140, 23));
        radioButton_3_Cam2 = new QRadioButton(groupBox_Cam2);
        radioButton_3_Cam2->setObjectName(QString::fromUtf8("radioButton_3_Cam2"));
        radioButton_3_Cam2->setGeometry(QRect(10, 90, 140, 23));
        radioButton_4_Cam2 = new QRadioButton(groupBox_Cam2);
        radioButton_4_Cam2->setObjectName(QString::fromUtf8("radioButton_4_Cam2"));
        radioButton_4_Cam2->setGeometry(QRect(10, 120, 140, 23));
        tabWidget->addTab(Tab_Cam2, QString());
        Tab_Cam3 = new QWidget();
        Tab_Cam3->setObjectName(QString::fromUtf8("Tab_Cam3"));
        groupBox_Cam3 = new QGroupBox(Tab_Cam3);
        groupBox_Cam3->setObjectName(QString::fromUtf8("groupBox_Cam3"));
        groupBox_Cam3->setGeometry(QRect(0, 0, 150, 155));
        radioButton_1_Cam3 = new QRadioButton(groupBox_Cam3);
        radioButton_1_Cam3->setObjectName(QString::fromUtf8("radioButton_1_Cam3"));
        radioButton_1_Cam3->setGeometry(QRect(10, 30, 140, 23));
        radioButton_1_Cam3->setChecked(true);
        radioButton_2_Cam3 = new QRadioButton(groupBox_Cam3);
        radioButton_2_Cam3->setObjectName(QString::fromUtf8("radioButton_2_Cam3"));
        radioButton_2_Cam3->setGeometry(QRect(10, 60, 140, 23));
        radioButton_3_Cam3 = new QRadioButton(groupBox_Cam3);
        radioButton_3_Cam3->setObjectName(QString::fromUtf8("radioButton_3_Cam3"));
        radioButton_3_Cam3->setGeometry(QRect(10, 90, 140, 23));
        radioButton_4_Cam3 = new QRadioButton(groupBox_Cam3);
        radioButton_4_Cam3->setObjectName(QString::fromUtf8("radioButton_4_Cam3"));
        radioButton_4_Cam3->setGeometry(QRect(10, 120, 140, 23));
        tabWidget->addTab(Tab_Cam3, QString());
        Tab_Cam4 = new QWidget();
        Tab_Cam4->setObjectName(QString::fromUtf8("Tab_Cam4"));
        groupBox_Cam4 = new QGroupBox(Tab_Cam4);
        groupBox_Cam4->setObjectName(QString::fromUtf8("groupBox_Cam4"));
        groupBox_Cam4->setGeometry(QRect(0, 0, 150, 155));
        radioButton_1_Cam4 = new QRadioButton(groupBox_Cam4);
        radioButton_1_Cam4->setObjectName(QString::fromUtf8("radioButton_1_Cam4"));
        radioButton_1_Cam4->setGeometry(QRect(10, 30, 140, 23));
        radioButton_1_Cam4->setChecked(true);
        radioButton_2_Cam4 = new QRadioButton(groupBox_Cam4);
        radioButton_2_Cam4->setObjectName(QString::fromUtf8("radioButton_2_Cam4"));
        radioButton_2_Cam4->setGeometry(QRect(10, 60, 140, 23));
        radioButton_3_Cam4 = new QRadioButton(groupBox_Cam4);
        radioButton_3_Cam4->setObjectName(QString::fromUtf8("radioButton_3_Cam4"));
        radioButton_3_Cam4->setGeometry(QRect(10, 90, 140, 23));
        radioButton_4_Cam4 = new QRadioButton(groupBox_Cam4);
        radioButton_4_Cam4->setObjectName(QString::fromUtf8("radioButton_4_Cam4"));
        radioButton_4_Cam4->setGeometry(QRect(10, 120, 140, 23));
        tabWidget->addTab(Tab_Cam4, QString());
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        pushButton_denied = new QPushButton(page_4);
        pushButton_denied->setObjectName(QString::fromUtf8("pushButton_denied"));
        pushButton_denied->setGeometry(QRect(0, 0, 320, 240));
        pushButton_denied->setIconSize(QSize(320, 240));
        stackedWidget->addWidget(page_4);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        pushButton_authentication->setText(QApplication::translate("MainWindow", "ok", 0, QApplication::UnicodeUTF8));
        pushButton_Cam1->setText(QApplication::translate("MainWindow", "CAM1", 0, QApplication::UnicodeUTF8));
        pushButton_Cam2->setText(QApplication::translate("MainWindow", "CAM2", 0, QApplication::UnicodeUTF8));
        pushButton_Cam3->setText(QApplication::translate("MainWindow", "CAM3", 0, QApplication::UnicodeUTF8));
        pushButton_Cam4->setText(QApplication::translate("MainWindow", "Cam4", 0, QApplication::UnicodeUTF8));
        toolButton->setText(QApplication::translate("MainWindow", "Settings", 0, QApplication::UnicodeUTF8));
        pushButton_new_fingerprint->setText(QApplication::translate("MainWindow", "New \n"
" finger-\n"
"print", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "send\n"
"command\n"
"1", 0, QApplication::UnicodeUTF8));
        groupBox_Cam1->setTitle(QString());
        radioButton_1_Cam1->setText(QApplication::translate("MainWindow", "1080p/30FPS", 0, QApplication::UnicodeUTF8));
        radioButton_2_Cam1->setText(QApplication::translate("MainWindow", "720p/60FPS", 0, QApplication::UnicodeUTF8));
        radioButton_3_Cam1->setText(QApplication::translate("MainWindow", "640x480p/60FPS", 0, QApplication::UnicodeUTF8));
        radioButton_4_Cam1->setText(QApplication::translate("MainWindow", "640x480p/90FPS", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Tab_Cam1), QApplication::translate("MainWindow", "CAM1", 0, QApplication::UnicodeUTF8));
        groupBox_Cam2->setTitle(QString());
        radioButton_1_Cam2->setText(QApplication::translate("MainWindow", "1080p/30FPS", 0, QApplication::UnicodeUTF8));
        radioButton_2_Cam2->setText(QApplication::translate("MainWindow", "720p/60FPS", 0, QApplication::UnicodeUTF8));
        radioButton_3_Cam2->setText(QApplication::translate("MainWindow", "640x480p/60FPS", 0, QApplication::UnicodeUTF8));
        radioButton_4_Cam2->setText(QApplication::translate("MainWindow", "640x480p/90FPS", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Tab_Cam2), QApplication::translate("MainWindow", "CAM2", 0, QApplication::UnicodeUTF8));
        groupBox_Cam3->setTitle(QString());
        radioButton_1_Cam3->setText(QApplication::translate("MainWindow", "1080p/30FPS", 0, QApplication::UnicodeUTF8));
        radioButton_2_Cam3->setText(QApplication::translate("MainWindow", "720p/60FPS", 0, QApplication::UnicodeUTF8));
        radioButton_3_Cam3->setText(QApplication::translate("MainWindow", "640x480p/60FPS", 0, QApplication::UnicodeUTF8));
        radioButton_4_Cam3->setText(QApplication::translate("MainWindow", "640x480p/90FPS", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Tab_Cam3), QApplication::translate("MainWindow", "CAM3", 0, QApplication::UnicodeUTF8));
        groupBox_Cam4->setTitle(QString());
        radioButton_1_Cam4->setText(QApplication::translate("MainWindow", "1080p/30FPS", 0, QApplication::UnicodeUTF8));
        radioButton_2_Cam4->setText(QApplication::translate("MainWindow", "720p/60FPS", 0, QApplication::UnicodeUTF8));
        radioButton_3_Cam4->setText(QApplication::translate("MainWindow", "640x480p/60FPS", 0, QApplication::UnicodeUTF8));
        radioButton_4_Cam4->setText(QApplication::translate("MainWindow", "640x480p/90FPS", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Tab_Cam4), QApplication::translate("MainWindow", "CAM4", 0, QApplication::UnicodeUTF8));
        pushButton_denied->setText(QApplication::translate("MainWindow", "denied", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
