#include "Marynarka.h"
Marynarka::Marynarka()
{
	this->cenaMarynarki = cenaMarynarki;
}
void Marynarka::kup()
{

		Sklep::utarg(this->cenaMarynarki);
		Sklep::zaplata(this->cenaMarynarki);
}
void Marynarka::zmienCene(double cenaMarynarki)
{
	this->cenaSpodni = cenaSpodni;
}