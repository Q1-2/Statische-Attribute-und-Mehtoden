#pragma once
#include <string>
using namespace std;

class Girokonto
{
private:
	// statisches Klassenattribut
	static int anzahl; //Gemeinsamer Zähler aller erstellten Objekte.

	string besitzer;
	int kontoNr;
	double kontostand;

public:
	void einzahlen(double);
	double auszahlen(double);

	void setBesitzer(string derBesitzer);
	void setKontoNr(int dieKontoNr);
	void setKontostand(double derKontostand);
	

	static int getAnzahlObjekte(); // NEU - Gibt die Anzahl der aktuellen Objekte zurück
	string getBesitzer();
	int getKontoNr();
	double getKontostand();

	Girokonto();
	Girokonto(string derBesitzer, double derKontostand);
	~Girokonto();
};

