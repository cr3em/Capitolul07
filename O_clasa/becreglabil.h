#ifndef BECREGLABIL_H
#define BECREGLABIL_H


class BecReglabil
{
public:
    void SetPutereCurenta(unsigned short);
    void SetPutereMaxima(unsigned short);
    unsigned short GetPutereCurenta() {return putereCurenta;}
    unsigned short GetPutereMaxima() {return putereMaxima;}
    void Aprinde();
    void Stinge();
    void MaresteLumina(short);
    void ReduceLumina(short);
    void StareBec();

private:
    unsigned short putereCurenta;
    unsigned short putereMaxima;
    static unsigned short putereMinima;
    bool aprins;
};

#endif // BECREGLABIL_H
