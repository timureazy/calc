#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<cmath>

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
    void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_20_clicked();

    void on_pushButton_21_clicked();

    void on_pushButton_22_clicked();

    void on_pushButton_23_clicked();

    void on_pushButton_24_clicked();

    void on_pluss_2_clicked();

    void on_eq_2_clicked();

    void on_minus_2_clicked();

    void on_mult_2_clicked();

    void on_div_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_9_clicked();

private:
    Ui::MainWindow *ui;
    QString str;
    float x = 0;
    float y = 0;
    char ch;
    double PI = 3.1415926535;

};

#endif // MAINWINDOW_H
