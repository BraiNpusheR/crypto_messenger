#include "widget.h"
#include "ui_widget.h"
#include "QMessageBox"
#include <iostream>


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_Registration_clicked()
{
    QMessageBox::critical(NULL,QObject::tr("ERROR"),tr("VSE, 3.14zdec, vse ruhnulo!!!"));
}
