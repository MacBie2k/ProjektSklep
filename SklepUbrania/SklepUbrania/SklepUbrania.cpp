
#include <iostream>
#include "Zakupy.h"
#include "Sklep.h"
#include "Koszula.h"
#include "Garnitur.h"
#include "Marynarka.h"
#include "Spodnie.h"
using namespace std;

int main()
{
	Sklep* sklep = new Sklep();
	int a,szef=0,klienci=0;
	for (;;)
	{
		system("cls");
		cout << "Witam, czego Pan potrzebuje? " << endl;
		klienci++;
		for (;;)
		{
			cout << "1. Koszula"
				<< endl
				<< "2. Garnitur"
				<< endl
				<< "3. Spodnie"
				<< endl
				<< "4. Marynarka"
				<< endl
				<< "5. Dodatki"
				<< endl
				<< "6. wyjdz"
				<< endl;
			cin >> a;
			system("cls");
			
			switch (a)
			{
			case 1: 
			{
				Zakupy* zakup = new Koszula();
				zakup->kup();
				sklep->rachunek += zakup->rachunek;
				sklep->kasa += zakup->kasa;
				delete zakup;
			}
			break;
			case 2:
			{
				Zakupy* zakup = new Garnitur();
				zakup->kup();
				sklep->rachunek += zakup->rachunek;
				sklep->kasa += zakup->kasa;
				delete zakup;
				
				
			}
			break;
			case 3:
			{
				Zakupy* zakup = new Spodnie();
				zakup->kup();
				sklep->rachunek += zakup->rachunek;
				sklep->kasa += zakup->kasa;
				delete zakup;
			}
			break;
			case 4:
			{
				Zakupy* zakup = new Marynarka();
				zakup->kup();
				sklep->rachunek += zakup->rachunek;
				sklep->kasa += zakup->kasa;
				delete zakup;
			}
			break;
			case 5:
			{
				Zakupy* zakup = new Dodatki();
				zakup->kup();
				sklep->rachunek += zakup->rachunek;
				sklep->kasa += zakup->kasa;
				delete zakup;
			}
			break;
			case 6: delete sklep, exit(1);
			break;
			case 7:
			{
				klienci--;
				cout << "Dzisiejszy utarg: " << sklep->kasa<< " zl" << endl;
				cout << "Ilosc Klientow: " << klienci << endl;
				system("pause");
			}
			break;
			}
			
				system("cls");
				cout << "Cos jeszcze? (1-tak 2-nie)" << endl;
				int tn;
				cin >> tn;
				if (tn ==2)
				{
					system("cls");
					
					cout << "Do zaplaty: " <<sklep->rachunek<< " zl" << endl;
					sklep->nastepnyKlient();
					system("pause");
					system("cls");
					break;
				}
				else system("cls");
		}
	}
}
