#ifndef FORM3_H
#define FORM3_H

#include <QWidget>

#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlQuery>
#include <QSqlQueryModel>

namespace Ui {
class Form3;
}

class Form3 : public QWidget
{
    Q_OBJECT

public:
    explicit Form3(QWidget *parent = nullptr);
    ~Form3();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::Form3 *ui;
};

#endif // FORM3_H
