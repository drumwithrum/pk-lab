// Lab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int* przydzielTablice(int rozmiar) {
	int* tab = new int[rozmiar];
	return tab;
}

void zwolnijTablice(int* tab) {
	delete[] tab;
}

void wyswietlTablice(int* tab, int rozmiar) {
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


int main()
{	
	int rozmiarTablicy = 4;
	int* tablica = przydzielTablice(4);
	wypelnijTabliceZerami(tablica, rozmiarTablicy);
	wyswietlTablice(tablica, rozmiarTablicy);
	zwolnijTablice(tablica);
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
