#include <drum.h>
#include <QGraphicsScene>

Drum::Drum(){
    setPixmap(QPixmap("D:/img/img/red.png"));
    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    setPos(1000,250);
    timer->start(5);
}

void Drum::move(){
    setPos(x()-1,y());
    if (pos().x()<0){
        scene()->removeItem(this);
        delete this;
    }
}

