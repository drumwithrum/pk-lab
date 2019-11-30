#include <iostream>
#include "klasa.h"
#include <ctime>
#include <cstdlib>

using namespace std;

Macierz::Macierz(int wier, int kolum)
{
    kolumny = kolum;
    wiersze = wier;

    tablica = new float*[wiersze];
    for (int i=0; i<wiersze; i++)
        tablica[i]= new float[kolumny];
}

void Macierz::wypisz()
{
    for ( int i=0; i<wiersze; i++)
    {
        cout<<endl<<"wiersz "<<i<<": \t";
        for ( int j=0; j<kolumny; j++)
        {
            cout<<tablica[i][j]<<" ";
        }
    }
    cout<<endl;
}

Macierz::~Macierz()
{
      for( int i = 0; i < wiersze; i++ )
      {delete[]tablica[i];}
      delete[] tablica;
}

void Macierz::wypisz_losowo()
{
   float liczba;
   //float n;
   srand( time( NULL ) );

   for ( int i=0; i<wiersze; i++)
   {
       for ( int j=0; j<kolumny; j++)
       {
           liczba = rand()%100+1;  //1 + float( n -1)*rand() / ((float) RAND_MAX );
           tablica[i][j] = liczba;
       }
   }

}

Macierz operator+(Macierz &m1, Macierz &m2)
{
    Macierz m3(m1);
    {
        for (int i=0; i<m3.wiersze; i++)
            for(int j=0; j<m3.kolumny; j++)
        {
            m3.tablica[i][j] += m2.tablica[i][j];
        }
        return m3;
    }
}
Macierz operator+(Macierz &m1, float liczba)
{
    Macierz m3(m1);
    {
        for (int i=0; i<m3.wiersze; i++)
            for(int j=0; j<m3.kolumny; j++)
        {
            m3.tablica[i][j] += liczba;
        }
        return m3;
    }
}

void Macierz::odwolaj(int w, int k)
{
    cout<<tablica[w][k];
}
