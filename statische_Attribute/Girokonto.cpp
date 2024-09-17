#include "Girokonto.h"

#include <iostream>
using namespace std;

int Girokonto::anzahl = 0; //Die Initialisierung statischer Klassenattribute werden außerhalb der Klasse gemacht!

Girokonto::Girokonto()
{
	besitzer = "";
	kontoNr = anzahl++; // NEU 
	kontostand = 0;
}

Girokonto::Girokonto(string derBesitzer, double derKontostand)
{
	kontoNr = anzahl++; // NEU >> statt setKontonummer(dieKontonummer); auch der Parameterwert fehlt!
	setBesitzer(derBesitzer);
	setKontostand(derKontostand);
}

Girokonto::~Girokonto()
{
	anzahl--; // NEU
}

void Girokonto::einzahlen(double betrag)
{
	kontostand += betrag;
}

double Girokonto::auszahlen(double betrag)
{
	if (kontostand >= betrag)
	{
		kontostand -= betrag;
		return betrag;
	}
	else
	{
		return 0;
	}

}

void Girokonto::setBesitzer(string derBesitzer)
{
	if (besitzer != "Peter")
	{
		besitzer = derBesitzer;
	}
	else
	{
		besitzer = "nicht vergeben";
	}
}

void Girokonto::setKontoNr(int dieKontoNr)
{
	kontoNr = dieKontoNr;
}

void Girokonto::setKontostand(double derKontostand)
{
	kontostand = derKontostand;
}


int Girokonto::getAnzahlObjekte()
{
	return anzahl; //Achtung! Das statische Klassenattribut wird im Heap und nicht im Stack gespeichert.
}

string Girokonto::getBesitzer()
{
	return besitzer;
}

int Girokonto::getKontoNr()
{
	return kontoNr;
}

double Girokonto::getKontostand()
{
	return kontostand;
}


