#include "candelabru.h"

void Candelabru::ConfigureazaCandelabru(unsigned short n) {
    nrBecuri = n;
    listaBecuri = new BecReglabil[nrBecuri];
    for(int i = 0; i < nrBecuri; ++i) {
        listaBecuri[i].SetPutereCurenta(0);
        listaBecuri[i].SetPutereMaxima(100);
    }
}

void Candelabru::AprindeLumina() {
    for(int i = 0; i < nrBecuri; ++i){
        listaBecuri[i].Aprinde();
    }
}

void Candelabru::StingeLumina() {
    for(int i = 0; i < nrBecuri; ++i){
        listaBecuri[i].Stinge();
    }
}

void Candelabru::MaresteLumina(unsigned short volt) {
    for(int i = 0; i < nrBecuri; ++i) {
        listaBecuri[i].MaresteLumina(volt);    }
}

void Candelabru::ReduceLumina(unsigned short volt) {
    for(int i = 0; i < nrBecuri; ++i) {
        listaBecuri[i].ReduceLumina(volt);
    }
}

unsigned short Candelabru::PutereMaximaCandelabru() {
    unsigned short suma = 0;
    for(int i = 0; i < nrBecuri; ++i) {
        suma += listaBecuri[i].GetPutereMaxima();
    }
    return  suma;
}

bool Candelabru::StareCandelabru() {
    for(int i = 0; i < nrBecuri; ++i) {
        if(listaBecuri[i].GetPutereCurenta() > 0)
            return true;
    }
    return false;
}
