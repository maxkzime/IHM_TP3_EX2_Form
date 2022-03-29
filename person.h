// TP3/EX2/person.h
// Exercice 2 : formulaire de saisie
// BODIN Maxime C2
// 22/03/27

#ifndef PERSON_H
#define PERSON_H

#include <QString>
#include <QDate>

class Person
{
private:
    QString itsName;
    QString itsFirstname;
    QDate itsDate;

public:
    Person();
    void setItsName(const QString &newItsName);
    void setItsFirstname(const QString &newItsFirstname);
    void setItsDate(const QDate &newItsDate);
};

#endif // PERSON_H
