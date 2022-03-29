// TP3/EX2/widget.cpp
// Exercice 2 : formulaire de saisie
// BODIN Maxime C2
// 22/03/27

#include "widget.h"
#include "ui_widget.h"

#include "person.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::IHM)
{
    ui->setupUi(this);
}


Widget::~Widget()
{delete ui;}


void Widget::on_leName_textEdited(const QString &arg1)
{
    itsPerson.setItsName(arg1);
    ui->printName->setText(arg1);
}


void Widget::on_leFirstname_textEdited(const QString &arg1)
{
    itsPerson.setItsFirstname(arg1);
    ui->printFirstname->setText(arg1);
}


void Widget::on_cwBirthdate_clicked(const QDate &date)
{
    itsPerson.setItsDate(date);
    ui->printBirthdate->setText(date.toString("dd MMMM yyyy"));
}


