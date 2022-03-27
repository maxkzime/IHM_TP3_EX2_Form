// TP3/EX2/person.cpp
// Exercice 2 : formulaire de saisie
// BODIN Maxime C2
// 22/03/27

#include "person.h"

Person::Person()
{}

void Person::setName(QString aName)
{itsName = aName;}

void Person::setFirstname(QString aFirstname)
{itsFirstname = aFirstname;}

void Person::setDate(QDate aDate)
{itsDate = aDate;}
