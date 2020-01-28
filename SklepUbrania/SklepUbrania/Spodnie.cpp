#include "Spodnie.h"
Spodnie::Spodnie()
{
	this->cenaSpodni = cenaSpodni;
}
void Spodnie::kup()
{
	cout << "A moze pasek do tych spodni? (1-tak 2-nie)" << endl;
	int temp;
	cin >> temp;
	if (temp == 1)
	{
		Sklep::utarg(this->cenaSpodni+cenaDodatku);
		Sklep::zaplata(this->cenaSpodni+cenaDodatku);
	}
	else
	{
		Sklep::utarg(this->cenaSpodni );
		Sklep::zaplata(this->cenaSpodni);
	}
}
void Spodnie::zmienCene(double cenaSpodni)
{
	this->cenaSpodni = cenaSpodni;
}