// TP3/EX2/widget.h
// Exercice 2 : formulaire de saisie
// BODIN Maxime C2
// 22/03/27

#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#include "person.h"

QT_BEGIN_NAMESPACE
namespace Ui { class IHM; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    Person itsPerson;

private:
    Ui::IHM *ui;

//public slots:
//    void onEditName(QString aName);
//    void onEditFirstname(QString aFirstname);
//    void onEditDate();

private slots:
    void on_leName_textEdited(const QString &arg1);
    void on_leFirstname_textEdited(const QString &arg1);
    void on_cwBirthdate_clicked(const QDate &date);

};
#endif // WIDGET_H
