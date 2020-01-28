#pragma once
#include "Koszula.h"
class Spodnie :
	public Koszula
{
protected:
	double cenaSpodni = 500;
public:
	Spodnie();
	void kup();
	void zmienCene(double);
};

