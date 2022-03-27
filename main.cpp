// TP3/EX2/main.cpp
// Exercice 2 : formulaire de saisie
// BODIN Maxime C2
// 22/03/27

#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
}

