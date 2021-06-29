#include "form2.h"
#include "ui_form2.h"

Form2::Form2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form2)
{
    ui->setupUi(this);
}

Form2::~Form2()
{
    delete ui;
}

void Form2::on_pushButton_3_clicked()
{
    QSqlQuery q;
    QString  user,pass;
    user=ui->username1->text();
    pass=ui->password1->text();
    q.exec("INSERT INTO reg VALUES('"+user+"','"+pass+"')");

    form.show();
    this->hide();
}

void Form2::on_pushButton_clicked()
{
    this->close();
}

void Form2::on_pushButton_2_clicked()
{
    this->showMinimized();
}
