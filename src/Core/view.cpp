#include "view.h"

View::View(const int &width, const int &heigth, QList<QGraphicsItem*> items)
    : width(width)
    , heigth(heigth)
{
    this->setSceneRect(0, 0, width, heigth);
    for(QGraphicsItem *item: items) this->addItem(item);
}
