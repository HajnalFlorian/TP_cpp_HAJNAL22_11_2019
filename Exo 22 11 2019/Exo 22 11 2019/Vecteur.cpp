#include <iostream>
#include <cmath>
#include<stdlib.h>
#include"Vecteur.h"
using namespace std;
// exo69
//constructeur
Vecteur::Vecteur(float fX, float fY, float fZ)
{
	this->fX = fX;
	this->fY = fY;
	this->fZ = fZ;
	nbrVecteur++;
}
Vecteur::Vecteur()
{
	this->fX = 0.0;
	this->fY = 0.0;
	this->fZ = 0.0;
	nbrVecteur++;
}
//Vecteur::Vecteur(float fX = 0.0, float fY = 0.0, float fZ = 0.0);
//set
void Vecteur::setfX(float fX)
{
	this->fX = fX;
}

void Vecteur::setfY(float fY)
{
	this->fY = fY;
}

void Vecteur::setfZ(float fZ)
{
	this->fZ = fZ;
}
//get
float Vecteur::getfX()
{
	return fX;
}

float Vecteur::getfY()
{
	return fY;
}

float Vecteur::getfZ()
{
	return fZ;
}
//destructeur
Vecteur::~Vecteur()
{
	nbrVecteur--;
}
//Exo 70
bool Vecteur::Valcoincide(Vecteur vecteur) // comparaison par valeur
{
	if (vecteur.fX == fX && vecteur.fY == fY && vecteur.fZ == fZ)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Vecteur::Adcoincide(Vecteur* vecteur)// comparaison par adresse
{
	if (vecteur->fX == fX && vecteur->fY == fY && vecteur->fZ == fZ)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Vecteur::Refcoincide(Vecteur& vecteur)// comparaison par reférence
{
	if (vecteur.fX == fX && vecteur.fY == fY && vecteur.fZ == fZ)
	{
		return true;
	}
	else
	{
		return false;
	}
}
//exo 71
float Vecteur::Valnormax(Vecteur vecteur) // normx par valeur
{
	float normv1 = vecteur.fX * vecteur.fX + vecteur.fY * vecteur.fY + vecteur.fZ * vecteur.fZ;
	float normv2 = fX * fX + fY * fY + fZ * fZ;
	if (normv1 > normv2)return normv1;
	else return normv2;
}

float Vecteur::Refnormax(Vecteur& vecteur) // normax par référence
{
	float normv1 = vecteur.fX * vecteur.fX + vecteur.fY * vecteur.fY + vecteur.fZ * vecteur.fZ;
	float normv2 = fX * fX + fY * fY + fZ * fZ;
	if (normv1 > normv2)return normv1;
	else return normv2;
}

float Vecteur::Adnormax(Vecteur* vecteur) // normax par adresse
{
	float normv1 = vecteur->fX * vecteur->fX + vecteur->fY * vecteur->fY + vecteur->fZ * vecteur->fZ;
	float normv2 = fX * fX + fY * fY + fZ * fZ;
	if (normv1 > normv2)return normv1;
	else return normv2;
}
//ex72
Vecteur Vecteur::somme(Vecteur vecteur) //méthode somme retoure variable resultat de la classe vecteur.
{
	Vecteur resultat;
	resultat.fX = fX + vecteur.fX;
	resultat.fY = fY + vecteur.fY;
	resultat.fZ = fZ + vecteur.fZ;
	return resultat;
}

float Vecteur::prodScalaire(Vecteur vecteur)
{
	float resultat = fX*vecteur.fX + fY*vecteur.fY + fZ*vecteur.fZ;
	return resultat;

}

void Vecteur::affichage()
{
	cout << "X: " << fX << endl << "Y: " << fY << endl << "Z: " << fZ << endl;
}

int Vecteur::numVecteur()
{
	return nbrVecteur;
}







