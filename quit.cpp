#include "quit.h"
#include "ui_quit.h"
#include "mainwindow.h"

Quit::Quit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Quit)
{
    ui->setupUi(this);
}

Quit::~Quit()
{
    delete ui;
}

void Quit::qshow()
{
    this->show();
}

void Quit::on_pushButton_clicked()
{
    this->hide();
}

void Quit::on_pushButton_2_clicked()
{
    this->hide();
    MainWindow *m = new MainWindow();
    m->mshow();
}
