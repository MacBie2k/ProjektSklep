#pragma once
#include "Zakupy.h"
class Dodatki :
	public Zakupy
{
protected:
	double cenaDodatku=20;
public:
	Dodatki();
	void kup();
	void zmienCene(double);
};

