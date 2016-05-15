#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "playscene.h"
#include "quit.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mshow()
{
    this->show();
}

void MainWindow::on_pushButton_clicked()
{
    this->hide();
    PlayScene * playscene = new PlayScene();
}

void MainWindow::on_pushButton_2_clicked()
{
    delete this;
    Quit *q = new Quit();
    q->qshow();

}
