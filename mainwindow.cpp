#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()
{
    form2.show();
}

void MainWindow::on_pushButton_3_clicked()
{

    QSqlQuery  q;

    QString  s,s2;
    s=ui->lineEdit_username->text();
    s2=ui->lineEdit_password->text();
    if(s=="admin"&&s2=="admin")
    {
       form3.show();
    }
    q.exec("SELECT password FROM reg WHERE username='"+s+"'");
    if(q.first())
    {
            form.show();

    }
    else
    {
        ui->label_5->setText("incorrect pass");
    }
}

void MainWindow::on_pushButton_clicked()
{
    this->close();
}

void MainWindow::on_pushButton_4_clicked()
{
    this->showMinimized();
}

void MainWindow::on_lineEdit_username_cursorPositionChanged(int arg1, int arg2)
{

}
