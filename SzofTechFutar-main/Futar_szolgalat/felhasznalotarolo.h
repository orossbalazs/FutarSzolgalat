#pragma once
#include <string> 
#include <iostream>
#include <istream>
#include <list>

#include "felhasznalo.h"

using namespace std;

class FelhasznaloTarolo
{
    list<Felhasznalo> felhasznalok;
public:
    FelhasznaloTarolo();
    void felhasznaloHozzaad(const Felhasznalo& f);
    void felhasznaloBeolvas();
    void felhasznaloFajlbairas();
    void felhasznaloTorles(Felhasznalo f);
    Felhasznalo getFelhasznalo() const;
    list<Felhasznalo> getFelhasznalok() const;
    void etteremListaz(const string& nev, const string& kategoria);
    void profilModositas(const string& email);
    Felhasznalo belepes(const string& email, const string& jelszo);
};

