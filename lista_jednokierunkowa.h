#include <iostream>

using namespace std;

struct Element{
		int element;
		Element* wsk;
	};

class lista{
	private:
	Element *head,*tail;
	int count;
	void DodajPierwszyElement(int wartosc);
	void UsunZaWskaznikiem(Element *wskaznik);
	
	public:
		lista();
		int getCount();
		void DodajNaPoczatek(int wartosc);
		void DodajNaKoniec(int wartosc);
		void Wyswietl();
		void Sortuj();
		void UsunElement(int numer);
		void DodajZaN_ty(int numer,int wartosc);
			
};

