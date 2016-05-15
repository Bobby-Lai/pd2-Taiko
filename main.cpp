#include "mainwindow.h"
#include <QApplication>
#include "playscene.h"
#include "rec.h"
#include "drum.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //PlayScene playscene;
    MainWindow m;
    m.show();


    return a.exec();
}
