#include "Garnitur.h"
Garnitur::Garnitur()
{
	this->cenaGarnituru = cenaMarynarki + cenaSpodni;
}
void Garnitur::kup()
{
	cout << "Polecam koszule do garnituru, w komplecie koszula 50% taniej. (1-tak 2-nie)";
	int temp;
	cin >> temp;
	if (temp == 1) this->cenaGarnituru += cenaKoszuli / 2;
	Sklep::utarg(this->cenaGarnituru);
	Sklep::zaplata(this->cenaGarnituru);
}
void Garnitur::zmienCene(double cenaGarnituru)
{
	this->cenaGarnituru = cenaGarnituru;
}