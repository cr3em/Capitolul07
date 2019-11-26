#include "candelabru.h"
#include <iostream>

Candelabru::Candelabru()
{

}
/*
primește numărul de becuri al candelabrului sub forma unui parametru unsigned short
inițializează corespunzător membrul nrBecuri
inițializează listaBecuri prin crearea pe heap a unui array cu numărul necesar de elemente
inițializează fiecare bec din listă punându-i puterea curentă pe 0 și cea maximă pe 100
nu returnează nimic*/
enum Bec {bec1, bec2, bec3, bec4, bec5};
void Candelabru::ConfigureazaCandelabru(unsigned short nrBecuri) {
    listaBecuri = new BecReglabil[nrBecuri];
    listaBecuri[bec1].SetPutereCurenta(0);
    listaBecuri[bec1].SetPutereMaxima(100);
    listaBecuri[bec2].SetPutereCurenta(0);
    listaBecuri[bec2].SetPutereMaxima(100);
    listaBecuri[bec3].SetPutereCurenta(0);
    listaBecuri[bec3].SetPutereMaxima(100);
    listaBecuri[bec4].SetPutereCurenta(0);
    listaBecuri[bec4].SetPutereMaxima(100);
    listaBecuri[bec5].SetPutereCurenta(0);
    listaBecuri[bec5].SetPutereMaxima(100);
}
/*nu primește parametri
pune la fiecare bec puterea curentă pe maxim și membrul aprins pe true
nu returnează nimic*/
void Candelabru::AprindeLumina() {
    for (unsigned int i = 0; i < nrBecuri; ++i) {
        listaBecuri[i].SetPutereMaxima(100);
        listaBecuri[i].Aprinde();
    }
}

/*nu primește parametri
pune la fiecare bec puterea curentă pe 0 și membrul aprins pe false
nu returnează nimic*/
void Candelabru::Stingelumina() {
    for (unsigned int i = 0; i < nrBecuri; ++i) {
        listaBecuri[i].SetPutereCurenta(0);
        listaBecuri[i].Stinge();
    }
}

/*primește un parametru de tip unsigned short
crește valoarea lui putereCurenta a fiecărui bec cu parametrul primit
nu returnează nimic*/
void Candelabru::Candelabru::MaresteLumina(unsigned short volt) {
    for (unsigned int i = 0; i < nrBecuri; ++i) {
        listaBecuri[i].MaresteLumina(volt);
    }
}

/*primește un parametru de tip unsigned short
scade valoarea lui putereCurenta a fiecărui bec cu parametrul primit
nu returnează nimic*/
void Candelabru::ReduceLumina(unsigned short volt) {
    for (unsigned int i = 0; i < nrBecuri; ++i) {
        listaBecuri[i].ReduceLumina(volt);
    }
}

/*nu primește parametri
returneză suma puterilor maxime ale becurilor din listă*/
short Candelabru::PutereMaxima() {
    short sumaPuteri = 0;
    for (unsigned int i = 0; i < nrBecuri; ++i) {
        sumaPuteri += listaBecuri[i].GetPutereMaxima();
    }
    return sumaPuteri;
}

/*nu primește parametri
returneză true dacă cel puțin un bec are membrul aprins pe true. Dacă nu, returnează false*/
void Candelabru::StareCandelabru() {
    for (unsigned int i = 0; i < nrBecuri; ++i) {
        cout << listaBecuri[i].StareBec() << endl;
    }

}

Candelabru::~Candelabru()
{

}
