#include <iostream>
#include <cmath>
#include<cstdlib>
#include<stdlib.h>
#include"Vecteur.h"
// exo69
//constructeur
Vecteur::Vecteur(float fX, float fY, float fZ)
{
	this->fX = fX;
	this->fY = fY;
	this->fZ = fZ;
}
Vecteur::Vecteur()
{
	this->fX = 0.0;
	this->fY = 0.0;
	this->fZ = 0.0;
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
float Vecteur::Valnormax(Vecteur vecteur)
{
	float normv1 = vecteur.fX * vecteur.fX + vecteur.fY * vecteur.fY + vecteur.fZ * vecteur.fZ;
	float normv2 = fX * fX + fY * fY + fZ * fZ;
	if (normv1 > normv2)return normv1;
	else return normv2;
}

float Vecteur::Refnormax(Vecteur& vecteur)
{
	float normv1 = vecteur.fX * vecteur.fX + vecteur.fY * vecteur.fY + vecteur.fZ * vecteur.fZ;
	float normv2 = fX * fX + fY * fY + fZ * fZ;
	if (normv1 > normv2)return normv1;
	else return normv2;
}

float Vecteur::Adnormax(Vecteur* vecteur)
{
	float normv1 = vecteur->fX * vecteur->fX + vecteur->fY * vecteur->fY + vecteur->fZ * vecteur->fZ;
	float normv2 = fX * fX + fY * fY + fZ * fZ;
	if (normv1 > normv2)return normv1;
	else return normv2;
}





