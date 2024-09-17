#include "Sparkonto.h"

double Sparkonto::zins = 0; // Klassenattribute werden außerhalb der Klassendefinition initialisiert! 

void Sparkonto::setZins(double z) // Beachte: static entfällt bei der Implementierung der Methode!
{
	zins = z; //Statische Methoden können nur mit statischen, objektunabhängigen Variablen (hier: static int zins) zusammenarbeiten.
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
