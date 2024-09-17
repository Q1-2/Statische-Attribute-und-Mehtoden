#include <iostream>
#include <string>
#include "Girokonto.h"

using namespace std;

int main()
{
    Girokonto obj1;
    cout << obj1.getAnzahlObjekte() << endl;

    Girokonto obj2("Dabogert", 100);
    cout << obj1.getAnzahlObjekte() << endl;
    cout << obj2.getAnzahlObjekte() << endl;
    obj1.~Girokonto();
    cout << obj2.getAnzahlObjekte() << endl;
    


    return 0;
}
