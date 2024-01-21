#include "pyropad.h"
#include "./ui_pyropad.h"

PyroPad::PyroPad(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PyroPad)
{
    ui->setupUi(this);
}

PyroPad::~PyroPad()
{
    delete ui;
}
