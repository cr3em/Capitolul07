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
    putereCurenta -= volt;
    if(putereCurenta < putereMinima)
        putereCurenta = putereMinima;
        if(putereCurenta == 0)
            aprins = false;

}

void BecReglabil::StareBec() {
    if(aprins == true)
        std::cout << "Becul este aprins\n";
    else
        std::cout << "Becul este stins\n";
}
