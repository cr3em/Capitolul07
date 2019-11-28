#include <iostream>
#include "becreglabil.h"

using namespace std;

int main()
{
    BecReglabil bec75{}, bec100{};
    bec75.SetPutereCurenta(0);
    bec75.SetPutereMaxima(75);
    bec100.SetPutereCurenta(0);
    bec100.SetPutereMaxima(100);

    bec75.Aprinde();
    bec75.StareBec();
    bec100.Aprinde();
    bec100.StareBec();

    bec75.Stinge();
    bec75.StareBec();
    bec100.Stinge();
    bec100.StareBec();

    bec75.MaresteLumina(90);
    bec75.StareBec();
    bec100.MaresteLumina(90);
    bec100.StareBec();

    bec75.ReduceLumina(75);
    bec75.StareBec();
    bec100.ReduceLumina(75);
    bec100.StareBec();

    cout << "\nPutere curenta bec 75 = " << bec75.GetPutereCurenta() << "W" << endl;
    cout << "Putere curenta bec 100 = " << bec100.GetPutereCurenta() << "W\n" << endl;

    return 0;
}
