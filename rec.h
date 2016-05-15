#ifndef REC_H
#define REC_H

#include <QGraphicsRectItem>
#include <QGraphicsItem>
#include <QObject>

class Rec: public QObject, public QGraphicsRectItem{
    Q_OBJECT
public:
    Rec(QGraphicsItem *parent = 0);
    void keyPressEvent(QKeyEvent * event);
signals:
    void RedHit();
    void BlueHit();

};
#endif // REC_H
