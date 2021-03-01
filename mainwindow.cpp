#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
MainWindow::MainWindow(QWidget *parent) :QMainWindow(parent),ui(new Ui::MainWindow){
    ui->setupUi(this);
}
MainWindow::~MainWindow(){
    delete ui;
}
void MainWindow::on_pushButton_15_clicked(){
    ui->lineEdit->setText(ui->lineEdit->text()+"1");
    str += "1";
}
void MainWindow::on_pushButton_16_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"2");
    str += "2";
}
void MainWindow::on_pushButton_17_clicked(){
    ui->lineEdit->setText(ui->lineEdit->text()+"3");
    str += "3";
}
void MainWindow::on_pushButton_18_clicked(){
    ui->lineEdit->setText(ui->lineEdit->text()+"4");
    str += "4";
}
void MainWindow::on_pushButton_19_clicked(){
    ui->lineEdit->setText(ui->lineEdit->text()+"5");
    str += "5";
}
void MainWindow::on_pushButton_20_clicked(){
    ui->lineEdit->setText(ui->lineEdit->text()+"6");
    str += "6";
}
void MainWindow::on_pushButton_21_clicked(){
    ui->lineEdit->setText(ui->lineEdit->text()+"7");
    str += "7";
}
void MainWindow::on_pushButton_22_clicked(){
    ui->lineEdit->setText(ui->lineEdit->text()+"8");
    str += "8";
}
void MainWindow::on_pushButton_23_clicked(){
    ui->lineEdit->setText(ui->lineEdit->text()+"9");
    str +="9";
}
void MainWindow::on_pushButton_24_clicked(){
    ui->lineEdit->setText(ui->lineEdit->text()+"0");
    str += "0";
}
void MainWindow::on_pluss_2_clicked(){
    x = str.toFloat();
    ch = '+';
    ui->lineEdit->setText(ui->lineEdit->text()+'+');
    str.clear();
}
void MainWindow::on_eq_2_clicked(){
    float resultat = 0.f;
    y = str.toFloat();
    str.clear();
    ui->lineEdit->clear();
    switch(ch){
        case '+':
            resultat = x+y;
        break;
        case '-':
            resultat = x-y;
        break;
        case '/':
            if(y != 0){
                resultat = x/y;
            }
            else{
                QMessageBox::information(this,"Ошибка","Деление на ноль");
                str.clear();
                ui->lineEdit->clear();
            }
        break;
        case '*':
            resultat = x*y;
        break;
    }
    str = QString::number(resultat);
    ui->lineEdit->setText(str);
}
void MainWindow::on_minus_2_clicked(){
    x = str.toFloat();
    ch = '-';
    ui->lineEdit->setText(ui->lineEdit->text()+ch);
    str.clear();
}
void MainWindow::on_mult_2_clicked(){
    x = str.toFloat();
    ch = '*';
    ui->lineEdit->setText(ui->lineEdit->text()+ch);
    str.clear();
}
void MainWindow::on_div_2_clicked(){
    x = str.toFloat();
    ch = '/';
    ui->lineEdit->setText(ui->lineEdit->text()+ch);
    str.clear();
}
void MainWindow::on_pushButton_5_clicked(){
    x = str.toFloat();
    x /= 57.2956;
    str.clear();
    x = std::sin(x);
    ui->lineEdit->setText(QString::number(x));
}
void MainWindow::on_pushButton_7_clicked(){
    x = str.toFloat();
    x /= 57.2956;
    str.clear();
    x = std::cos(x);
    ui->lineEdit->setText(QString::number(x));
}
void MainWindow::on_pushButton_clicked(){
    x = str.toFloat();
    x /= 57.2956;
    str.clear();
    x = std::tan(x);
    ui->lineEdit->setText(QString::number(x));
}
void MainWindow::on_pushButton_3_clicked(){
    x = str.toFloat();
    x /= 57.2956;
    x = 1/std::tan(x);
    ui->lineEdit->setText(QString::number(x));
}
void MainWindow::on_pushButton_4_clicked(){
    x = str.toFloat();
    x /= 57.2956;
    str.clear();
    x = std::asin(x);
    ui->lineEdit->setText(QString::number(x));
}
void MainWindow::on_pushButton_8_clicked(){
    x = str.toFloat();
    x /= 57.2956;
    str.clear();
    x = std::acos(x);
    ui->lineEdit->setText(QString::number(x));
}
void MainWindow::on_pushButton_2_clicked(){
    x = str.toFloat();
    x /= 57.2956;
    str.clear();
    x = std::atan(x);
    ui->lineEdit->setText(QString::number(x));
}
void MainWindow::on_pushButton_6_clicked(){
    x = str.toFloat();
    x /= 57.2956;
    str.clear();
    x = 1/std::atan(x);
    ui->lineEdit->setText(QString::number(x));
}
void MainWindow::on_pushButton_9_clicked(){
    str.clear();
    ui->lineEdit->clear();
}
