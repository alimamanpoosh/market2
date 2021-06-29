#include "form.h"
#include "ui_form.h"

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
    QTimer *timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(showTime()));
    timer->start();

    QDateTime dateTime=QDateTime::currentDateTime();
    QString datetimetext=dateTime.toString();
    ui->label_6->setText(datetimetext);

    ui->label_7->setText(datetimetext);
    ui->label_8->setText(datetimetext);
    ui->label_15->setText(datetimetext);
    ui->label_16->setText(datetimetext);
    ui->label_17->setText(datetimetext);
    ui->label_18->setText(datetimetext);
    ui->label_19->setText(datetimetext);
    ui->label_20->setText(datetimetext);
    ui->label_21->setText(datetimetext);
    ui->label_22->setText(datetimetext);
    ui->label_23->setText(datetimetext);
    ui->label_24->setText(datetimetext);
    ui->label_25->setText(datetimetext);
    ui->label_26->setText(datetimetext);
    ui->label_27->setText(datetimetext);
    ui->label_28->setText(datetimetext);
    ui->price1->setText(0);
    ui->price2->setText(0);
    ui->price3->setText(0);
    ui->price4->setText(0);
    ui->price5->setText(0);
    ui->price6->setText(0);
    ui->price7->setText(0);
    ui->price8->setText(0);
    ui->price9->setText(0);
    ui->price10->setText(0);
    ui->price11->setText(0);
    ui->price12->setText(0);
    ui->price13->setText(0);
    ui->price14->setText(0);
    ui->price15->setText(0);
    ui->price16->setText(0);
    ui->price17->setText(0);

}

Form::~Form()
{
    delete ui;
}
void Form::showTime()
{
    QTime time=QTime::currentTime();
    QString time_text=time.toString("hh : mm : ss");
    ui->label_9->setText(time_text);
}


void Form::on_pushButton_4_clicked()
{
    QSqlQuery  q;

    QString  s;

    s=ui->lineEdit->text();
    q.exec("SELECT price FROM pro WHERE name='"+s+"'");
    if(q.first())
    {
        ui->price1->setText((q.value(0).toString()));
    }
    else
    {
        ui->price1->setText("product is not exist");
    }
}

void Form::on_pushButton_7_clicked()
{
    QSqlQuery  q;

    QString  s;

    s=ui->lineEdit_6->text();
    q.exec("SELECT price FROM pro WHERE name='"+s+"'");
    if(q.first())
    {
        ui->price2->setText((q.value(0).toString()));
    }
    else
    {
        ui->price2->setText("product is not exist");
    }
}

void Form::on_pushButton_8_clicked()
{
    QSqlQuery  q;

    QString  s;

    s=ui->lineEdit_9->text();
    q.exec("SELECT price FROM pro WHERE name='"+s+"'");
    if(q.first())
    {
        ui->price3->setText((q.value(0).toString()));
    }
    else
    {
        ui->price3->setText("product is not exist");
    }
}

void Form::on_pushButton_9_clicked()
{
    QSqlQuery  q;

    QString  s;

    s=ui->lineEdit_30->text();
    q.exec("SELECT price FROM pro WHERE name='"+s+"'");
    if(q.first())
    {
        ui->price4->setText((q.value(0).toString()));
    }
    else
    {
        ui->price4->setText("product is not exist");
    }
}

void Form::on_pushButton_10_clicked()
{
    QSqlQuery  q;

    QString  s;

    s=ui->lineEdit_33->text();
    q.exec("SELECT price FROM pro WHERE name='"+s+"'");
    if(q.first())
    {
        ui->price5->setText((q.value(0).toString()));
    }
    else
    {
        ui->price5->setText("product is not exist");
    }

}

void Form::on_pushButton_11_clicked()
{
    QSqlQuery  q;

    QString  s;

    s=ui->lineEdit_36->text();
    q.exec("SELECT price FROM pro WHERE name='"+s+"'");
    if(q.first())
    {
        ui->price6->setText((q.value(0).toString()));
    }
    else
    {
        ui->price6->setText("product is not exist");
    }

}

void Form::on_pushButton_12_clicked()
{
    QSqlQuery  q;

    QString  s;

    s=ui->lineEdit_39->text();
    q.exec("SELECT price FROM pro WHERE name='"+s+"'");
    if(q.first())
    {
        ui->price7->setText((q.value(0).toString()));
    }
    else
    {
        ui->price7->setText("product is not exist");
    }
}

void Form::on_pushButton_13_clicked()
{
    QSqlQuery  q;

    QString  s;

    s=ui->lineEdit_42->text();
    q.exec("SELECT price FROM pro WHERE name='"+s+"'");
    if(q.first())
    {
        ui->price8->setText((q.value(0).toString()));
    }
    else
    {
        ui->price8->setText("product is not exist");
    }
}

void Form::on_pushButton_14_clicked()
{
    QSqlQuery  q;

    QString  s;

    s=ui->lineEdit_45->text();
    q.exec("SELECT price FROM pro WHERE name='"+s+"'");
    if(q.first())
    {
        ui->price9->setText((q.value(0).toString()));
    }
    else
    {
        ui->price9->setText("product is not exist");
    }
}

void Form::on_pushButton_15_clicked()
{
    QSqlQuery  q;

    QString  s;

    s=ui->lineEdit_48->text();
    q.exec("SELECT price FROM pro WHERE name='"+s+"'");
    if(q.first())
    {
        ui->price10->setText((q.value(0).toString()));
    }
    else
    {
        ui->price10->setText("product is not exist");
    }
}

void Form::on_pushButton_16_clicked()
{
    QSqlQuery  q;

    QString  s;

    s=ui->lineEdit_51->text();
    q.exec("SELECT price FROM pro WHERE name='"+s+"'");
    if(q.first())
    {
        ui->price11->setText((q.value(0).toString()));
    }
    else
    {
        ui->price11->setText("product is not exist");
    }
}

void Form::on_pushButton_17_clicked()
{
    QSqlQuery  q;

    QString  s;

    s=ui->lineEdit_51->text();
    q.exec("SELECT price FROM pro WHERE name='"+s+"'");
    if(q.first())
    {
        ui->price12->setText((q.value(0).toString()));
    }
    else
    {
        ui->price12->setText("product is not exist");
    }
}

void Form::on_pushButton_18_clicked()
{
    QSqlQuery  q;

    QString  s;

    s=ui->lineEdit_57->text();
    q.exec("SELECT price FROM pro WHERE name='"+s+"'");
    if(q.first())
    {
        ui->price13->setText((q.value(0).toString()));
    }
    else
    {
        ui->price13->setText("product is not exist");
    }
}

void Form::on_pushButton_19_clicked()
{
    QSqlQuery  q;

    QString  s;

    s=ui->lineEdit_60->text();
    q.exec("SELECT price FROM pro WHERE name='"+s+"'");
    if(q.first())
    {
        ui->price14->setText((q.value(0).toString()));
    }
    else
    {
        ui->price14->setText("product is not exist");
    }
}

void Form::on_pushButton_20_clicked()
{
    QSqlQuery  q;

    QString  s;

    s=ui->lineEdit_63->text();
    q.exec("SELECT price FROM pro WHERE name='"+s+"'");
    if(q.first())
    {
        ui->price15->setText((q.value(0).toString()));
    }
    else
    {
        ui->price15->setText("product is not exist");
    }
}

void Form::on_pushButton_21_clicked()
{
    QSqlQuery  q;

    QString  s;

    s=ui->lineEdit_66->text();
    q.exec("SELECT price FROM pro WHERE name='"+s+"'");
    if(q.first())
    {
        ui->price16->setText((q.value(0).toString()));
    }
    else
    {
        ui->price16->setText("product is not exist");
    }
}

void Form::on_pushButton_22_clicked()
{
    QSqlQuery  q;

    QString  s;

    s=ui->lineEdit_69->text();
    q.exec("SELECT price FROM pro WHERE name='"+s+"'");
    if(q.first())
    {
        ui->price17->setText((q.value(0).toString()));
    }
    else
    {
        ui->price17->setText("product is not exist");
    }
}

void Form::on_pushButton_5_clicked()
{
    QSqlQuery  q;

    QString  s;

    s=ui->lineEdit_70->text();
    q.exec("SELECT number,price FROM pro WHERE name='"+s+"'");
    if(q.first())
    {
        ui->label_10->setText((q.value(0).toString()));
        ui->label_11->setText((q.value(1).toString()));
    }
    else {
        ui->label_10->setText("don't exist");
        ui->label_11->setText("don't exist");
    }
}

void Form::on_pushButton_clicked()
{
    this->close();
}

void Form::on_pushButton_2_clicked()
{
    this->showMinimized();
}

void Form::on_pushButton_6_clicked()
{
    double sum=0;
    sum+=ui->price1->text().toDouble();
    sum+=ui->price2->text().toDouble();
    sum+=ui->price3->text().toDouble();
    sum+=ui->price4->text().toDouble();
    sum+=ui->price5->text().toDouble();
    sum+=ui->price6->text().toDouble();
    sum+=ui->price7->text().toDouble();
    sum+=ui->price8->text().toDouble();
    sum+=ui->price9->text().toDouble();
    sum+=ui->price10->text().toDouble();
    sum+=ui->price11->text().toDouble();
    sum+=ui->price12->text().toDouble();
    sum+=ui->price13->text().toDouble();
    sum+=ui->price14->text().toDouble();
    sum+=ui->price15->text().toDouble();
    sum+=ui->price16->text().toDouble();
    sum+=ui->price17->text().toDouble();

   ui->label_12->setText(QString::number(sum));


}
