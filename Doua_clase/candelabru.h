#ifndef CANDELABRU_H
#define CANDELABRU_H
#include "becreglabil.h"

class Candelabru
{
public:
    void ConfigureazaCandelabru(unsigned short);
    void AprindeLumina();
    void StingeLumina();
    void MaresteLumina(unsigned short);
    void ReduceLumina(unsigned short);
    unsigned short PutereMaximaCandelabru();
    bool StareCandelabru();

private:
    unsigned short nrBecuri;
    BecReglabil* listaBecuri;
};

#endif // CANDELABRU_H
