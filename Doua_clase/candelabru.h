#ifndef CANDELABRU_H
#define CANDELABRU_H
#include "becreglabil.h"

class Candelabru
{
public:
    Candelabru();
    void ConfigureazaCandelabru(unsigned short);
    void AprindeLumina();
    void Stingelumina();
    void MaresteLumina(unsigned short);
    void ReduceLumina(unsigned short);
    short PutereMaxima();
    void StareCandelabru();

    ~Candelabru();
private:
    unsigned short nrBecuri;
    BecReglabil* listaBecuri;
};

#endif // CANDELABRU_H
