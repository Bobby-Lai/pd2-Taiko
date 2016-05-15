#ifndef PLAYSCENE_H
#define PLAYSCENE_H

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsRectItem>
#include <QObject>
#include <QImage>
#include <QPixmap>
#include <QGraphicsPixmapItem>
#include <QBrush>
#include <drum.h>

class PlayScene : public QObject {
    Q_OBJECT
public:
    PlayScene();
};

#endif // PLAYSCENE_H
