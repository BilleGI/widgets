#include "circle.h"
#include <QPainter>
#include <QPaintEvent>

Circle::Circle(QWidget* parent)
{
    setParent(nullptr);
    setToolTip("picture");
    setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    mRedCircle = QPixmap("/home/ilya/C++/Module36/HomeWork/widgets/image/red_circle.png");
    mYellowCircle = QPixmap("/home/ilya/C++/Module36/HomeWork/widgets/image/yellow_circle.png");
    mGreenCircle = QPixmap("/home/ilya/C++/Module36/HomeWork/widgets/image/green_circle.png");
    mCurrentCircle = mRedCircle;
    setGeometry(mCurrentCircle.rect());
}

void Circle::paintEvent(QPaintEvent* e)
{
    QPainter p(this);
    p.drawPixmap(e->rect(), mCurrentCircle);
}

QSize Circle::minimumSizeHint() const
{
    Circle g;
    return QSize(100,100);
}

void Circle::setRed()
{
    mCurrentCircle = mRedCircle;
    update();
}

void Circle::setYellow()
{
    mCurrentCircle = mYellowCircle;
    update();
}

void Circle::setGreen()
{
    mCurrentCircle = mGreenCircle;
    update();
}
