#pragma once
#include"Marynarka.h"
class Garnitur :
	public Marynarka
{
protected:
	double cenaGarnituru;
public:

	Garnitur();
	void kup();
	void zmienCene(double);
};

