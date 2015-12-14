#include "myrect.h"
#include <QKeyEvent>

void MyRect::keyPressEvent(QKeyEvent *event)
{

    switch (event->key())
    {
    case Qt::Key_Left:
        setPos( x()-10, y() );
        break;

    case Qt::Key_Right:
        setPos( x()+10, y() );
        break;

    case Qt::Key_Up:
        setPos( x(), y()-10 );
        break;

    case Qt::Key_Down:
        setPos( x(), y()+10 );
        break;
    }

}
