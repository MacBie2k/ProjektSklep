#include "Sklep.h"
#include<iostream>
using namespace std;
Sklep::Sklep()
{
	this->rachunek = 0;
	this->kasa = 0;
}
void Sklep::utarg(double kwota)
{
	this->kasa = kwota;
}
void Sklep::zaplata(double kwota)
{
	this->rachunek =kwota;
	cout << rachunek;
}
void Sklep::nastepnyKlient()
{
	rachunek = 0;
}