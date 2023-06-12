#include <QWidget>
#include <QPixmap>

class Circle : public QWidget
{
    Q_OBJECT
public:
    Circle() = default;
    Circle(QWidget* parent);
    void paintEvent(QPaintEvent *e) override;
    QSize minimumSizeHint() const override;
public slots:
    void setRed();
    void setYellow();
    void setGreen();
private:
    QPixmap mCurrentCircle;
    QPixmap mRedCircle;
    QPixmap mYellowCircle;
    QPixmap mGreenCircle;
};
