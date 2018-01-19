#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_authentication_clicked();

    void on_toolButton_clicked();

    void on_buttonBox_accepted();


    void on_pushButton_Cam1_clicked();

    void on_pushButton_Cam2_clicked();

    void on_pushButton_Cam3_clicked();

    void on_pushButton_Cam4_clicked();

    void sendCam(int cam);


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
