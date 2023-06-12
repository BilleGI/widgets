#include <iostream>
#include <QApplication>
#include <QSlider>
#include <QVBoxLayout>
#include "circle.h"

using namespace std;

int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    auto *window = new QWidget;
    auto *slider = new QSlider(Qt::Horizontal);
    auto *circle = new Circle(nullptr);
    auto *layout = new QVBoxLayout(window);
    layout->addWidget(circle,1 , Qt::AlignCenter);
    layout->addWidget(slider);

    slider->setMinimum(0);
    slider->setMaximum(100);
    slider->setSliderPosition(0);
    slider->setStyleSheet("QSlider::handle:horizontal { background-color: green; }");
    window->setFixedSize(200, 250);
    QObject::connect(slider, &QSlider::valueChanged, [&slider, &circle]
        (int newValue)
        {
        if(newValue < 34) circle->setRed();
        else if (newValue < 67) circle->setYellow();
        else circle->setGreen();
    });

    window->show();
    return app.exec();
}
