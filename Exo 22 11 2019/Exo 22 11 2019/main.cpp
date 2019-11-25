#include <iostream>
#include <cmath>
#include<cstdlib>
#include<stdlib.h>
#include"Vecteur.h"
using namespace std; 




int main()
{
	Vecteur v1(1.0, 2.0, 3.0);
	Vecteur v2=Vecteur();

	bool test;
	/*test = v1.Valcoincide(v2);
	cout << test << endl;*///comparaison par valeur
	/*test = v1.Adcoincide(&v2);
	cout << test << endl;*/// test de comparaison sur l'adresse
	/*test = v1.Refcoincide(v2);
	cout << test << endl;*/ // test de comparaison par référence




	system("pause");

	return 0;
}