#pragma once
#include "Dodatki.h"
class Koszula :
	public Dodatki
{
protected:
	double cenaKoszuli=99;
public:
	 Koszula();
	 void kup();
	 void zmienCene(double);
	 void cena()
	 {
		 cout << this->cenaKoszuli;
	 }
};
