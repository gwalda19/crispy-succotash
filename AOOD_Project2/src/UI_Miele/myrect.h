#ifndef MYRECT
#define MYRECT

#include <QGraphicsRectItem>

class MyRect: public QGraphicsRectItem
{
public:
    void keyPressEvent(QKeyEvent* event);
};

#endif // MYRECT

