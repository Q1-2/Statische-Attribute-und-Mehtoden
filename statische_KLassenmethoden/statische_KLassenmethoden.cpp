#include "Sparkonto.h"
#include <iostream>
using namespace std;

int main()
{
	Sparkonto::setZins(1.5); // Bevor ein Objekt existiert, kann eine Klassenmethode schon aufgerufen werden.
	Sparkonto s1, s2;

	s1.einzahlen(100);
	s2.einzahlen(100),
	s1.verzinsen();
	s2.verzinsen();
	cout << s1.zeigeBetrag() << endl;
	cout << s2.zeigeBetrag() << endl;

	Sparkonto::setZins(5);	//Klassenmethoden können auch von Objekten aufgerufen werden -->  s2.setZins(5);  
	// Damit aber nimmand annimmt, dass hier nur ein Objekt verändert wird, sollten solche Aufrufe vermeiden werden. 
	s1.verzinsen();
	cout << s1.zeigeBetrag() << endl;
	cout << s2.zeigeBetrag() << endl;


	return 0;
}

