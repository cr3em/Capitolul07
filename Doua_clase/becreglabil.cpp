#include "becreglabil.h"
#include <iostream>

BecReglabil::BecReglabil()
{

}

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
    putereCurenta = 0;
    aprins = false;
}

unsigned short BecReglabil::MaresteLumina(unsigned short volt) {
    putereCurenta += volt;
    if(putereCurenta > putereMaxima) {
        putereCurenta = putereMaxima;
    }
    return (aprins = true);
}

unsigned short BecReglabil::ReduceLumina(unsigned short volt) {
    putereCurenta -= volt;
    if(putereCurenta < 0) {
        putereCurenta = 0;
    }
    return aprins = false;
}

void BecReglabil::StareBec() {
    if(aprins == true)
        std::cout << "Becul este aprins\n";
    else if (aprins == false)
        std::cout << "Becul este stins\n";
}

BecReglabil::~BecReglabil()
{

}
