#ifndef HITAREA_H
#define HITAREA_H

#include <QGraphicsItem>
#include <QGraphicsRectItem>
#include <QGraphicsPixmapItem>
#include <QObject>

class HitArea{
    Q_OBJECT
public:
    HitArea();
public slots:
    void BlueHit();
    void RedHit();
};

#endif // HITAREA_H
