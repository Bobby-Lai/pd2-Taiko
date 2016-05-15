#include "playscene.h"
#include "mainwindow.h"
#include "drum.h"
#include "rec.h"
#include "hitarea.h"
#include "bluehit.h"
#include "redhit.h"
#include <QTimer>

PlayScene::PlayScene(){
    //creat a scene
    QGraphicsScene *scene = new QGraphicsScene();
    scene->setSceneRect(0,0,1024,768);
    scene->setBackgroundBrush(QBrush(QImage("D:/img/img/bg.png")));

    //add a view
    QGraphicsView *view = new QGraphicsView(scene);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setFixedSize(1024,768);


    //add Rec
    Rec *rec = new Rec();
    rec->setFlag(QGraphicsItem::ItemIsFocusable);
    rec->setFocus();
    scene->addItem(rec);

    BlueHit *bluehit = new BlueHit();
    scene->addItem(bluehit);
    bluehit->setPos(80,190);

    //QTimer *timer = new QTimer();
    //QObject::connect(timer,SIGNAL(timeout()),bluehit,SLOT(create()));

    Drum *drum = new Drum();
    scene->addItem(drum);
    drum->setPos(1000,250);


    //show the view
    view->show();
}
