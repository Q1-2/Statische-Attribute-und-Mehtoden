#pragma once
class Sparkonto
{
private:
	double betrag;
	static double zins; // Statische Methoden können nur mit statischen, also objektunabhängigen Variablen zusammenarbeiten. 
	//Die Variable zins legt den Zinssatz für ALLE Sparkonten fest.

public:
	static void setZins(double); // Die Klassenmethode setZins dient dazu, das Klassenattribut zins zu verändern.

	void verzinsen(void);
	double zeigeBetrag(void);
	void einzahlen(double);
	Sparkonto(void);
	~Sparkonto(void);
};

