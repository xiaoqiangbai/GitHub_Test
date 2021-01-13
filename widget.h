#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "images_change.h"
#include "QTimer"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);

    Images_Change ic;

    ~Widget();

    int i;

    void CycleCount();

private slots:
    void on_pushButton_clicked();
    void slotCountMessage();



private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
