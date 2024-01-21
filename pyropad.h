#ifndef PYROPAD_H
#define PYROPAD_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class PyroPad;
}
QT_END_NAMESPACE

class PyroPad : public QMainWindow
{
    Q_OBJECT

public:
    PyroPad(QWidget *parent = nullptr);
    ~PyroPad();

private:
    Ui::PyroPad *ui;
};
#endif // PYROPAD_H
