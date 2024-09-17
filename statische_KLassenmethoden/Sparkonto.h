#pragma once
class Sparkonto
{
private:
	double betrag;
	static double zins; // Statische Methoden k�nnen nur mit statischen, also objektunabh�ngigen Variablen zusammenarbeiten. 
	//Die Variable zins legt den Zinssatz f�r ALLE Sparkonten fest.

public:
	static void setZins(double); // Die Klassenmethode setZins dient dazu, das Klassenattribut zins zu ver�ndern.

	void verzinsen(void);
	double zeigeBetrag(void);
	void einzahlen(double);
	Sparkonto(void);
	~Sparkonto(void);
};

