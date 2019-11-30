#include <iostream>
#include "klasa.h"
#include <ctime>

using namespace std;

int main()
{
    Macierz tab1(3,3);
    tab1.wypisz_losowo();
    tab1.wypisz();

    tab1.odwolaj(0,0);

    Macierz tab2(3,3);
    tab2.wypisz_losowo();
    tab2.wypisz();

    Macierz tab3=tab1+(tab2);
    tab3.wypisz();

    Macierz tab4=tab1+(100);
    tab4.wypisz();

    return 0;
}
