#include "bdavrowidget.h"
#include "ui_bdavrowidget.h"
//#include "test/custom.cc"
#include "test/datafile.cc"
#include "test/generated.cc"
#include "test/generic.cc"
#include "test/resolving.cc"
#include "test/validating.cc"

BDAvroWidget::BDAvroWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BDAvroWidget)
{
    ui->setupUi(this);
    initAVRO();
}

BDAvroWidget::~BDAvroWidget()
{
    delete ui;
}

void BDAvroWidget::initAVRO()
{
}

void BDAvroWidget::on_pushButton_clicked()
{
    customTest();
}

void BDAvroWidget::on_pushButton_2_clicked()
{
    dataFileTest();
}

void BDAvroWidget::on_pushButton_3_clicked()
{
    genericTest();
}

void BDAvroWidget::on_pushButton_4_clicked()
{
    generatedTest();
}

void BDAvroWidget::on_pushButton_5_clicked()
{
    resolvingTest();
}

void BDAvroWidget::on_pushButton_6_clicked()
{
    validatingTest();
}
