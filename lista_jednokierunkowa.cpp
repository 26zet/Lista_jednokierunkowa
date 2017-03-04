#include <iostream>
#include "lista_jednokierunkowa.h"


int lista::getCount(){
			return count;
		}
lista::lista()
		{
			head = new Element;
			tail = new Element;
			int count = 0;
		}
void lista::DodajNaPoczatek(int wartosc)
		{
			if(count)
			{
				Element *tymczasowy = new Element;
				tymczasowy->element = wartosc;
				tymczasowy->wsk = head;
				head = tymczasowy;
					
			}
			else
			DodajPierwszyElement(wartosc);
			count++;
		}
		
void lista::DodajNaKoniec(int wartosc)
		{
			if(count)
			{
				Element *tymczasowy = new Element;
				tymczasowy->element = wartosc;
				tymczasowy->wsk = NULL;
				tail->wsk = tymczasowy;
				tail = tymczasowy;
			}
			else
			DodajPierwszyElement(wartosc);
			count++;
		}
		
void lista::DodajPierwszyElement(int wartosc){
			
			head->element = wartosc;
			head->wsk = NULL;
			tail = head;
		}
void lista::Wyswietl(){
			Element *tymczasowy = head;
			while(tymczasowy != NULL)
			{
			cout << tymczasowy->element << " ";
			tymczasowy = tymczasowy->wsk;
			}
		}
		
void lista::UsunElement(int numer)
	{
	if(numer < 1 || numer > count)
		cout << "Nie ma elementu o numerze " << numer << "!. Nie mozna usunac!" << endl;
		else {
	Element *tymczasowy = head;
	if(numer == 1) {
		head = head->wsk;
		delete tymczasowy;
	} else {
	for(int i = 2; i < numer; i++)
			tymczasowy = tymczasowy->wsk;
			Element *tymczasowy2 = tymczasowy->wsk;
		tymczasowy->wsk = tymczasowy->wsk->wsk;
		if (numer == count)
			tail = tymczasowy;
		delete tymczasowy2;
		}
	count--;
	}
}
void lista::UsunZaWskaznikiem(Element* wskaznik){
	
}

void lista::DodajZaN_ty(int numer,int wartosc){
	if(numer == 0)
		DodajNaPoczatek(wartosc);
		else
	if(numer == count)
		DodajNaKoniec(wartosc);
	else if(numer < 0 || numer > count)
			cout << "Nie ma elementu o numerze " << numer << "!. Nie mozna usunac!" << endl;
	else
	{
		Element *tymczasowy1 = head, *tymczasowy2 = new Element;
		for(int i = 1; i < numer; i++)
			tymczasowy1 = tymczasowy1->wsk;
		tymczasowy2->element = wartosc;
		tymczasowy2->wsk = tymczasowy1->wsk;
		tymczasowy1->wsk = tymczasowy2;
		count++;
	}
}

	
void lista::Sortuj(){
	Element *tymczasowy1;
	int min,licznik,KtoryKasowac;
	bool TakLubNie;
	for (int i = 1; i < count; i++)
		{
			tymczasowy1 = head;
			for(int j = 1; j < i; j++)
				tymczasowy1 = tymczasowy1->wsk;
			min = tymczasowy1->element;
			licznik = i;
			TakLubNie = false;
			while(tymczasowy1->wsk != NULL)
				{
					licznik++;
					//cout << licznik;
					tymczasowy1 = tymczasowy1->wsk;
					if(tymczasowy1->element < min){
						min = tymczasowy1->element;
						KtoryKasowac = licznik;
						TakLubNie = true;
						}
					}	
			if(TakLubNie){
				UsunElement(KtoryKasowac);
				DodajZaN_ty(i-1,min);
				//cout << i << " ";
			}
		}
	}
	
	
	
	
	
	

