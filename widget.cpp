#include "widget.h"
#include "ui_widget.h"
#include <QLabel>
#include <QMovie>
#include <QElapsedTimer>
#include "images_change.h"
#include <iostream>
#include <string>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    Images_Change ic;
    Images_Change ic2;
    QMovie *movie =new QMovie("/home/xiaoqiang/QT/ImageVideoDspDemo/Image/7.gif");

    ui->label->setMovie(movie);
    movie->start();

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(slotCountMessage()));
    timer->start(1000);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    //QMovie *movie = new QMovie("/home/xiaoqiang/QT/ImageVideoDspDemo/Image/dog.gif");//new QMovie(ic.NextImage());
    QMovie *movie = new QMovie(ic.NextImage());
    ui->label->setMovie(movie);
    movie->start();

    QMovie *movie1 = new QMovie(ic.NextImage2());
    ui->label->setMovie(movie1);
    movie1->start();
}


void Widget::slotCountMessage()
{
    QMovie *movie1 = new QMovie(ic.NextImage());
    ui->label->setMovie(movie1);
    movie1->start();
}



