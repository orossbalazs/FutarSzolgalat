#pragma once
#include <string>
#include <iostream>
#include <list> 

#include "felhasznalo.h"

using namespace std;

class Futar : public Felhasznalo
{
	string telefon;
	string vNev;
	string kNev;
	//list<Rendeles> rendelesek;
	string tipus = "futar";
public:
	Futar(const string& email, const string& jelszo, const string& telefon, const string& vNev, const string& kNev);
	void regisztracio(const string& email, const string& jelszo, const string& telefon, const string& vNev, const string& kNev);
	void rendelesListaz();
	void menuListaz();
	void rendelesKezel();

};

