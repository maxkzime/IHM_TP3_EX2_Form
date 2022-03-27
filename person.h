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
    void setName(QString aName);
    void setFirstname(QString aFirstname);
    void setDate(QDate aDate);

};

#endif // PERSON_H
