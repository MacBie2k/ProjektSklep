#include "Dodatki.h"
Dodatki::Dodatki()
{
	this->cenaDodatku = cenaDodatku;
}
void Dodatki::kup()
{
	Sklep::utarg(this->cenaDodatku);
	Sklep::zaplata(this->cenaDodatku);
}
void Dodatki::zmienCene(double cenaDodatku)
{
	this->cenaDodatku = cenaDodatku;
}