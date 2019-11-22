#include "Vecteur.h"
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

Vecteur::~Vecteur()
{
}

