#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include"form2.h"
#include"form3.h"
#include"form.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_lineEdit_username_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::MainWindow *ui;
    Form2 form2;
    Form3 form3;
    Form form;
};
#endif // MAINWINDOW_H
