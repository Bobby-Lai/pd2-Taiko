#include "rec.h"
#include <QKeyEvent>
#include <QDebug>

Rec::Rec(QGraphicsItem *parent): QGraphicsRectItem(parent)
{

}

void Rec::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_J){
        emit RedHit();
        qDebug()<<"Press a J";
    }
    else if (event->key() ==Qt::Key_F){
        emit BlueHit();
        qDebug()<<"Press a F";
    }
}
