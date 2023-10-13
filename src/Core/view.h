#ifndef VIEW_H
#define VIEW_H

#include <QGraphicsScene>


/**
 * @brief The View class
 */
class View : public QGraphicsScene
{
public:
    View(const int &width, const int &heigth, QList<QGraphicsItem*> items);

private:
    const int width;
    const int heigth;
};

#endif // VIEW_H
