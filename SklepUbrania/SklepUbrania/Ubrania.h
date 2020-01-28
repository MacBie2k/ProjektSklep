#pragma once
#include "Zakupy.h"
class Ubrania :
	public Zakupy
{
protected:
	string nazwa,kolor;
	double cena;
	char plec;
public:
	Ubrania();
	Ubrania(string, double,char, string);
	void zasob();
	

};

