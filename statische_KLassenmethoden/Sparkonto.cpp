#include "Sparkonto.h"

double Sparkonto::zins = 0; // Klassenattribute werden au�erhalb der Klassendefinition initialisiert! 

void Sparkonto::setZins(double z) // Beachte: static entf�llt bei der Implementierung der Methode!
{
	zins = z; //Statische Methoden k�nnen nur mit statischen, objektunabh�ngigen Variablen (hier: static int zins) zusammenarbeiten.
	//betrag=zins*betrag; // Eine nichtstatische Variable kann hier nicht benutz werden, da sie an ein bestimmtes Objekt gebunden ist.
}

void Sparkonto::verzinsen(void)
{
	betrag += betrag * zins / 100.0;
}

double Sparkonto::zeigeBetrag(void)
{
	return betrag;
}

void Sparkonto::einzahlen(double b)
{
	betrag += b;
}

Sparkonto::Sparkonto(void)
{
	betrag = 0;
}

Sparkonto::~Sparkonto(void)
{
}
