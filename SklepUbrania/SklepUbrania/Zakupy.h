#pragma once
#include <iostream>
#include "Sklep.h"
using namespace std;

class Zakupy:
	public Sklep
{
public:
	virtual void kup() = 0;
	virtual void zmienCene(double) = 0;
};

