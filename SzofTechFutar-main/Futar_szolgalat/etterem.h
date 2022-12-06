#pragma once
#include "felhasznalo.h"
#include <iostream>
#include <list>

using namespace std;

class Etterem : public Felhasznalo
{
    //Etlap etlap
    string telefon;
    string nev;
    string kategoria;
    list<string> rendeles;
    string tipus = "etterem";
public:
    Etterem();
    void regisztracio(const string& email, const string& jelszo, const string& telefon, const string& nev, const string& kategoria);
};