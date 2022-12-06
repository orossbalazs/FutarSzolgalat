#pragma once
#include <list>
#include <filesystem>
#include "felhasznalo.h"

class RegVasarlo : public Felhasznalo
{
	string telefon;
	string vNev;
	string kNev;
	string lakcim;
	list<string> kosar;
	string tipus = "regvasarlo";
public:
	RegVasarlo();
	void regisztracio(const string& email, const string& jelszo);
	void menuListaz() const;
	string kiir() const;
	void setTelefon(const string& _telefon);
	void setvNev(const string& _vNev);
	void setkNev(const string& _kNev);
	void setLakcim(const string& _lakcim);
	void kosarMegjelenit() const;
	void rendeles();
	void rendelesInditas();
	void kosarHozzaad(int index);
	void profilModositas();
	void profilTorles();
	void profilFajlbairas() const;
	void profilFajlbololvasas();
};

