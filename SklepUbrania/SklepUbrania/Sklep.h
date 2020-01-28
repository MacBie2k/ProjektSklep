#pragma once
#include <time.h>
class Sklep
{
public:
	 double kasa=0, rachunek=0;
	

public:
	Sklep();
	void utarg( double);
	 void zaplata(double);
	 void nastepnyKlient();
};


