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

    void on_toolButton_Settings_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
