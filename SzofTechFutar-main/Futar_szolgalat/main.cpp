#include "felhasznalo.h"
#include "felhasznalotarolo.h"
#include "regvasarlo.h"
#include "futar.h"
#include "etterem.h"
#include <iostream>
#include <list>

using namespace std;

FelhasznaloTarolo tarolo = FelhasznaloTarolo();
Felhasznalo felhasznalo;


void vendegNezet() {

	int input = 0;
	do
	{

		felhasznalo.menuListaz();
		cout << endl;
		cin >> input;
		switch (input)
		{
		case 1: {
			cout << "Adja meg az emailt: ";
			string email;
			cin >> email;
			cout << endl << "Adja meg a jelszot: ";
			string jelszo;
			cin >> jelszo;
			felhasznalo.regisztracio(email, jelszo);
			tarolo.felhasznaloHozzaad(felhasznalo);
			break;
		}
		case 2: {

			cout << "Adja meg az emailt: ";
			string email;
			cin >> email;
			cout << endl << "Adja meg a jelszot: ";
			string jelszo;
			cin >> jelszo;
			felhasznalo = tarolo.belepes(email, jelszo);
			input = 4;
			break;
		}
		case 3: {
			felhasznalo.kereses();
			break;
		}
		default:
			break;
		}
	} while (input != 4);

}


void regvasarloNezet() {

	int input = 0;
	do
	{
		RegVasarlo regvasarlo;
		regvasarlo.regisztracio(felhasznalo.getEmail(), felhasznalo.getJelszo());
		regvasarlo.menuListaz();
		cin >> input;
		switch (input)
		{
		case 1: {
			regvasarlo.kereses();
			break;
		}
		case 2: {
			regvasarlo.rendelesInditas();
			break;
		}
		case 3: {
			regvasarlo.kosarMegjelenit();
			break;
		}
		case 4: {
			regvasarlo.profilModositas();
			break;
		}
		case 5: {
			regvasarlo.profilTorles();
			break;
		}
		default:
			break;
		}

	} while (input != 6);
}


int main()
{
	int input = 0;
	do
	{
		tarolo.felhasznaloBeolvas();
		felhasznalo = Felhasznalo();
		vendegNezet();
		cin >> input;
		if (felhasznalo.getTipus() == "regvasarlo")
		{
			regvasarloNezet();
		}
	} while (input !=4);


}




