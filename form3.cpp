#include "form3.h"
#include "ui_form3.h"

Form3::Form3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form3)
{
    ui->setupUi(this);
    QSqlDatabase  db;
    db=QSqlDatabase ::addDatabase("QSQLITE");
    db.setDatabaseName("c:\\market\\product.db");
    db.open();


}

Form3::~Form3()
{
    delete ui;
}

void Form3::on_pushButton_4_clicked()
{
    QSqlQuery  q;
    q.exec("SELECT * FROM pro");

    QSqlQueryModel *m=new QSqlQueryModel;
    m->setQuery(q);

    ui->tableView->setModel(m);

}

void Form3::on_pushButton_5_clicked()
{
    QSqlQuery  q;
    q.exec("SELECT * FROM reg");

    QSqlQueryModel *m=new QSqlQueryModel;
    m->setQuery(q);

    ui->tableView_2->setModel(m);
}

void Form3::on_pushButton_2_clicked()
{
    QSqlQuery  q;

    QString  s;

    s= ui->lineEdit->text();

    q.exec("DELETE FROM pro WHERE name= '"+s+"' ");
}

void Form3::on_pushButton_6_clicked()
{
    QSqlQuery q;
    QString  sid,sname,snum,sprice,scategory;
    sid=ui->lineEdit_9->text();
    sname=ui->lineEdit_10->text();
    snum=ui->lineEdit_11->text();
    sprice=ui->lineEdit_12->text();
    scategory=ui->lineEdit_6->text();
    q.exec("INSERT INTO pro VALUES('"+sid+"','"+scategory+"','"+sname+"','"+snum+"','"+sprice+"')");

}

void Form3::on_pushButton_3_clicked()
{
    QSqlQuery  q;

    QString  sid,sname,snum,sprice,scategory;
    sid=ui->lineEdit_4->text();
    sname=ui->lineEdit_2->text();
    snum=ui->lineEdit_3->text();
    sprice=ui->Price->text();
    scategory=ui->lineEdit_5->text();
    q.exec("UPDATE pro SET name='"+sname+"' WHERE id='"+sid+"' ");
    q.exec("UPDATE pro SET number='"+snum+"' WHERE id='"+sid+"' ");
    q.exec("UPDATE pro SET price='"+sprice+"' WHERE id='"+sid+"' ");
    q.exec("UPDATE pro SET Category='"+scategory+"' WHERE id='"+sid+"' ");
}

void Form3::on_pushButton_7_clicked()
{
    QSqlQuery  q;

    QString  s;

    s=ui->lineEdit_8->text();
    q.exec("SELECT id,number,price,Category FROM pro WHERE name='"+s+"'");
    if(q.first())
    {
        ui->label_16->setText((q.value(0).toString()));
        ui->label_17->setText((q.value(1).toString()));
        ui->label_18->setText((q.value(2).toString()));
        ui->label_26->setText((q.value(3).toString()));
    }
    else {
        ui->label_16->setText("don't exist");
        ui->label_17->setText("don't exist");
        ui->label_18->setText("don't exist");
        ui->label_26->setText("don't exist");
    }
}

void Form3::on_pushButton_clicked()
{
    this->close();
}

void Form3::on_pushButton_8_clicked()
{
    this->showMinimized();
}
