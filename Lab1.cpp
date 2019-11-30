// Lab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
// zadanie 1 START
int* przydziel(int rozmiar) {
	int* tab = new int[rozmiar];
	return tab;
}

void zwolnij(int* tab) {
	delete[] tab;
}

void wyswietl(int* tab, int rozmiar) {
	cout << "Zawartosc tablicy:" << endl;
	for (int i = 0; i < rozmiar; i++) {
		cout << i << ": " << tab[i] << endl;
	}
}

void wypelnijTabliceZerami(int* tab, int rozmiar) {
	for (int i = 0; i < rozmiar; i++) {
		tab[i] = 0;
	}
}

// zadanie 1 END

// zadanie 2 START

void obliczSumeIloczyn(float& iloczyn, float& suma, float* tablica, int rozmiar);
void obliczSumeIloczyn(float& iloczyn, float& suma, float liczba1, float liczba2);void obliczSumeIloczyn(float& iloczyn, float& suma, float* tablica, int rozmiar) {	iloczyn = tablica[0];	suma = tablica[0];	for (int i = 1; i < rozmiar; i++) {		iloczyn = iloczyn * tablica[i];		suma = suma + tablica[i];	}}void obliczSumeIloczyn(float& iloczyn, float& suma, float liczba1, float liczba2) {	iloczyn = liczba1 * liczba2;	suma = liczba1 + liczba2;}// zadanie 2 END;

// zadanie 3 START;

class Zespolona {
	float rzeczywista;
	float urojona;
public:
	Zespolona(float r, float u) {
		rzeczywista = r;
		urojona = u;
	}

	Zespolona() {
		rzeczywista = 0;
		urojona = 0;
	}

	void dodaj(float liczba) {
		rzeczywista = rzeczywista + liczba;
	}
	void dodaj(Zespolona liczba) {
		rzeczywista = rzeczywista + liczba.rzeczywista;
		urojona = urojona + liczba.urojona;
	}

	void odejmij(float liczba) {
		rzeczywista = rzeczywista - liczba;
	}
	void odejmij(Zespolona liczba) {
		rzeczywista = rzeczywista - liczba.rzeczywista;
		urojona = urojona - liczba.urojona;
	}

	float modul() {
		return sqrt(rzeczywista * rzeczywista + urojona * urojona);
	}
};



int main()
{
	// testowanie zad 3;

	Zespolona liczba1;
	Zespolona liczba2(12, 3);
	Zespolona liczba3(123, 0);
	Zespolona liczba4(14, 4);
	Zespolona liczba5(15, 2);

	// tablica dynamicznie tworzonych obiektów
	Zespolona tablica[5];
	for (int i = 0; i < 5; i++) {
		Zespolona temp(i * 2, i + 7);
		tablica[i] = temp;
	};

	cout << tablica[0].modul() << endl;
	liczba1.dodaj(liczba2);
	cout << liczba1.modul() << endl;
	liczba1.dodaj(12);
	cout << liczba1.modul() << endl;

	/*
		// testowanie zad 1;
		int rozmiarTablicy = 4;
		int* tablica = przydziel(4);
		wypelnijTabliceZerami(tablica, rozmiarTablicy);
		wyswietl(tablica, rozmiarTablicy);
		zwolnij(tablica);
	*/

	/*
		// testowanie zad 2;
		float rozmiar = 2;
		float suma;
		float iloczyn;
		float tablica[2];
		tablica[0] = 1;
		tablica[1] = 21;
		float liczba1 = 12;
		float liczba2 = 11;
		obliczSumeIloczyn(iloczyn, suma, liczba1, liczba2);
		cout << suma << " - " << iloczyn << endl;

		*/
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
