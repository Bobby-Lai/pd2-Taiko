#ifndef DRUM_H
#define DRUM_H

#include <QGraphicsRectItem>
#include <QGraphicsPixmapItem>
#include <QTimer>
#include <QObject>

class Drum: public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Drum();
public slots:
    void move();

};
#endif // DRUM_H
