#include "Koszula.h"

Koszula::Koszula()
{
	this->cenaKoszuli = cenaKoszuli;
}
void Koszula::kup()
{
	Sklep::utarg(this->cenaKoszuli);
	Sklep::zaplata(this->cenaKoszuli);

}
void Koszula::zmienCene(double cenaKoszuli)
{
	this->cenaKoszuli = cenaKoszuli;
}