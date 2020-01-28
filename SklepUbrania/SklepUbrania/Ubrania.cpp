#include "Ubrania.h"
Ubrania::Ubrania()
{
	this->cena = 0;
	this->nazwa = '0';
	this->kolor = "0";
	this->plec = '0';
}
Ubrania::Ubrania(string nazwa,double cena,char plec,string kolor)
{
	 this->cena=cena;
	 this->nazwa=nazwa;
	 this->kolor =kolor;
	 this->plec = plec;
}
