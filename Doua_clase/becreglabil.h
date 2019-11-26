#ifndef BECREGLABIL_H
#define BECREGLABIL_H


class BecReglabil
{
public:
    BecReglabil();

    void SetPutereCurenta(unsigned short);
    void SetPutereMaxima(unsigned short);
    unsigned short GetPutereCurenta() {return putereCurenta;}
    unsigned short GetPutereMaxima() {return putereMaxima;}
    void Aprinde();
    void Stinge();
    unsigned short MaresteLumina(unsigned short);
    unsigned short ReduceLumina(unsigned short);
    void StareBec();

    ~BecReglabil();

private:
    unsigned short putereCurenta;
    unsigned short putereMaxima;
    bool aprins;
};

#endif // BECREGLABIL_H
