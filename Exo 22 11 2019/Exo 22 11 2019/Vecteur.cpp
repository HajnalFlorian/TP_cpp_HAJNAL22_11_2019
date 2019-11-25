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

Vecteur Vecteur::normax(Vecteur v, Vecteur v2)
{
	 float norm1 = v.fX * v.fX + v.fY * v.fY + v.fZ * v.fZ;
	 return *this;
	//return v;
}



