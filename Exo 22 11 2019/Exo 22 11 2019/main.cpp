#include <iostream>
#include <cmath>
#include<stdlib.h>
#include"Vecteur.h"
using namespace std; 




int main()
{
	Vecteur v1(3.0, 7.0, 9.0);
	Vecteur v2(4.0, 7.0, 10.0);
	// exercice 72
	Vecteur v3 = v1.somme(v2);
	cout << "le produit scalaire des 2 vecteur est : " << v1.prodScalaire(v2) << endl;
	v3.affichage();
	cout << v3.numVecteur() << endl;

	/*float normax; test exercice 71
	//normax = v1.Valnormax(v2); Normax par valeur
	//normax = v1.Refnormax(v2); Normax par référence
	//normax = v1.Adnormax(&v2); Normax par adresse
	//cout << normax << endl;*/
	

	/*bool test; test exercice  70
	test = v1.Valcoincide(v2);
	cout << test << endl;*///comparaison par valeur
	/*test = v1.Adcoincide(&v2);
	cout << test << endl;*/// test de comparaison sur l'adresse
	/*test = v1.Refcoincide(v2);
	cout << test << endl;*/ // test de comparaison par référence




	system("pause");

	return 0;
}