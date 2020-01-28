#pragma once
#include "Spodnie.h"
class Marynarka :
	public Spodnie
{
protected:
	double cenaMarynarki=589;
public:
	Marynarka();
	void kup();
	void zmienCene(double);
};

