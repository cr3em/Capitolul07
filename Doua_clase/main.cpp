#include <iostream>
#include "candelabru.h"

using namespace std;

int main()
{
    Candelabru cand3, cand5;
    cand3.ConfigureazaCandelabru(3);
    cand5.ConfigureazaCandelabru(5);
    cout << "Candelabrul este " << (cand3.StareCandelabru() ? "aprins" : "stins") << endl;
    cout << "Candelabrul este " << (cand5.StareCandelabru() ? "aprins" : "stins") << endl << endl;

    cand3.AprindeLumina();
    cand5.AprindeLumina();
    cout << "Candelabrul este " << (cand3.StareCandelabru() ? "aprins" : "stins") << endl;
    cout << "Candelabrul este " << (cand5.StareCandelabru() ? "aprins" : "stins") << endl << endl;

    cand3.StingeLumina();
    cand5.StingeLumina();
    cout << "Candelabrul este " << (cand3.StareCandelabru() ? "aprins" : "stins") << endl;
    cout << "Candelabrul este " << (cand5.StareCandelabru() ? "aprins" : "stins") << endl << endl;

    cand3.MaresteLumina(150);
    cand5.MaresteLumina(150);
    cout << "Candelabrul este " << (cand3.StareCandelabru() ? "aprins" : "stins") << endl;
    cout << "Candelabrul este " << (cand5.StareCandelabru() ? "aprins" : "stins") << endl << endl;

    cand3.ReduceLumina(75);
    cand5.ReduceLumina(75);
    cout << "Candelabrul este " << (cand3.StareCandelabru() ? "aprins" : "stins") << endl;
    cout << "Candelabrul este " << (cand5.StareCandelabru() ? "aprins" : "stins") << endl << endl;

    cand3.ReduceLumina(31);
    cand5.ReduceLumina(30);
    cout << "Candelabrul este " << (cand3.StareCandelabru() ? "aprins" : "stins") << endl;
    cout << "Candelabrul este " << (cand5.StareCandelabru() ? "aprins" : "stins") << endl << endl;

    cout << "Putere maxima cand3 = " << cand3.PutereMaximaCandelabru() << endl;
    cout << "Putere maxima cand5 = " << cand5.PutereMaximaCandelabru() << endl;

    return 0;
}
