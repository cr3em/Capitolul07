#include "becreglabil.h"
#include <iostream>

unsigned short BecReglabil::putereMinima = 0;

void BecReglabil::SetPutereCurenta(unsigned short volt){
    putereCurenta = volt;
}

void BecReglabil::SetPutereMaxima(unsigned short volt) {
    putereMaxima = volt;
}

void BecReglabil::Aprinde() {
    putereCurenta = putereMaxima;
    aprins = true;
}

void BecReglabil::Stinge() {
    putereCurenta = putereMinima;
    aprins = false;
}

void BecReglabil::MaresteLumina(short volt) {
    putereCurenta += volt;
    if(putereCurenta > putereMaxima) {
        putereCurenta = putereMaxima;
    }
    aprins = true;
}

void BecReglabil::ReduceLumina(short volt) {
    if(putereCurenta <= volt) {
        putereCurenta = putereMinima;
        aprins = false;
    }
    else
        putereCurenta -= volt;
}

void BecReglabil::StareBec() {
    if(aprins == true)
        std::cout << "Becul este aprins\n";
    else
        std::cout << "Becul este stins\n";
}
