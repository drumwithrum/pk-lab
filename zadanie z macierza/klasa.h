#include <iostream>

using namespace std;

class Macierz
{
private:
    int wiersze;
    int kolumny;
    float **tablica;

public:
    Macierz(int wier, int kolum); // konstruktor z parametrami
    ~Macierz(); // destruktor

    void wypisz_losowo();
    void wypisz();
    void odwolaj(int w, int k);

   friend Macierz operator+(Macierz &m1, Macierz &m2);
   friend Macierz operator+(Macierz &m1, float liczba);
};
