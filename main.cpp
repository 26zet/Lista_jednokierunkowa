#include <iostream>
#include "lista_jednokierunkowa.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	lista lista1;
	lista1.DodajNaPoczatek(5);
	lista1.DodajNaPoczatek(8);
	lista1.DodajNaPoczatek(9);
	lista1.DodajNaKoniec(100);
	lista1.DodajNaKoniec(101);
	lista1.DodajNaKoniec(300);
	lista1.DodajNaPoczatek(23902);
	lista1.DodajNaKoniec(323);
	lista1.Wyswietl();
	cout <<endl;
	lista1.UsunElement(8);
	lista1.Wyswietl();
	cout <<endl;
	lista1.DodajZaN_ty(4,11111);
	lista1.DodajZaN_ty(7,123);
	lista1.Wyswietl();
	cout << "Teraz dzikosc:" << endl;
	lista1.Sortuj();
	lista1.Wyswietl();
	cout <<endl;
	cout << "Ilosc elementow: " << lista1.getCount();
	
	
	cout << endl << endl;
	
	
	lista lista2;
	
	for(int i = 0; i < 20000; i++)
		lista2.DodajNaKoniec(10-i);
		lista2.DodajNaKoniec(500);
		lista2.Sortuj();
		lista2.Wyswietl();
	
	return 0;
}
