#ifndef BDAVROWIDGET_H
#define BDAVROWIDGET_H

#include <QWidget>

namespace Ui {
class BDAvroWidget;
}

class BDAvroWidget : public QWidget
{
    Q_OBJECT

public:
    explicit BDAvroWidget(QWidget *parent = 0);
    ~BDAvroWidget();

    void initAVRO();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::BDAvroWidget *ui;
};

#endif // BDAVROWIDGET_H
