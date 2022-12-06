#include "regvasarlo.h"

RegVasarlo::RegVasarlo() :Felhasznalo()
{
	telefon = "";
	vNev = "";
	kNev = "";
	lakcim = "";
}

void RegVasarlo::regisztracio(const string& email, const string& jelszo)
{
	Felhasznalo::regisztracio(email, jelszo);
}

void RegVasarlo::menuListaz() const
{
	cout << "1.) Kereses" << endl;
	cout << "2.) Belepes" << endl;
	cout << "3.) Kosar megtekintese" << endl;
	cout << "4.) Profil modositasa" << endl;
	cout << "5.) Profil torlese" << endl;
	cout << "6.) Kilepes" << endl;
}

string RegVasarlo::kiir() const
{
	return  tipus + " " + email + " " + jelszo;
}

void RegVasarlo::setTelefon(const string& _telefon)
{
	telefon = _telefon;
}

void RegVasarlo::setvNev(const string& _vNev)
{
	vNev = _vNev;
}

void RegVasarlo::setkNev(const string& _kNev)
{
	kNev = _kNev;
}

void RegVasarlo::setLakcim(const string& _lakcim)
{
	lakcim = _lakcim;
}

void RegVasarlo::kosarMegjelenit() const
{
}

void RegVasarlo::rendeles()
{
}

void RegVasarlo::rendelesInditas()
{
}

void RegVasarlo::kosarHozzaad(int index)
{
}

void RegVasarlo::profilModositas()
{
	profilFajlbololvasas();
	int input = 0;
	do
	{
		cout << "Adja meg mit akar modositani";
		cout << "1.) Telefon" << endl;
		cout << "2.) Vezeteknev" << endl;
		cout << "3.) Keresztnev" << endl;
		cout << "4.) Lakcim" << endl;
		cout << "5.) Kilepes" << endl;
		cout << "A valasztasa: ";
		cin >> input;

		switch (input)
		{
		case 1: {
			cout << endl << "Aktualis telefonszam: ";
			cout << telefon;
			cout << endl << "Adja meg a telefonszamot: ";
			string tel;
			cin >> tel;
			setTelefon(tel);
			break;
		}
		case 2: {
			cout << endl << "Aktualis vezeteknev: ";
			cout << vNev;
			cout << endl << "Adja meg a vezeteknevet: ";
			string vez;
			cin >> vez;
			setvNev(vez);
			break;
		}
		case 3: {
			cout << endl << "Aktualis keresztnev: ";
			cout << kNev;
			cout << endl << "Adja meg a keresztnevet: ";
			string kez;
			cin >> kez;
			setkNev(kez);
			break;
		}
		case 4: {
			cout << endl << "Aktualis lakcim: ";
			cout << lakcim;
			cout << endl << "Adja meg a lakcimet";
			string lak;
			cin >> lak;
			setLakcim(lak);
			break;
		}
		default:
			break;
		}
		profilFajlbairas();
	} while (input!=5);




}

void RegVasarlo::profilTorles()
{
}



void RegVasarlo::profilFajlbairas() const
{
	ofstream fajl;
	fajl.open(email + "_profil.txt");
	fajl << telefon << "," << vNev << "," << kNev << "," << lakcim;
	fajl << endl;
	fajl.close();

}

static list<list<string>> felhasznaloLista = Felhasznalo::getFajl(Felhasznalo::getEmailStatic() + "profil.txt");
void RegVasarlo::profilFajlbololvasas()
{
	
}

