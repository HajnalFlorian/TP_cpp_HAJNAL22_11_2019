#include <iostream>
#include <cmath>
#include<cstdlib>
#include<stdlib.h>
#include"Vecteur.h"
using namespace std; 




int main()
{
	Vecteur v1(3.0, 7.0, 9.0);
	Vecteur v2=Vecteur();
	float normax;
	//normax = v1.Valnormax(v2); Normax par valeur
	//normax = v1.Refnormax(v2); Normax par référence
	//normax = v1.Adnormax(&v2); Normax par adresse
	cout << normax << endl;
	

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