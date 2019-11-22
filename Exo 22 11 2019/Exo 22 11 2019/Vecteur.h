#pragma once
class Vecteur
{
private:
	float fX, fY, fZ;

public:
	//contructeur
	Vecteur(float fX, float fY, float fZ);
	Vecteur();
	Vecteur(float fX = 0.0, float fY = 0.0, float fZ = 0.0);
	//set
	void setfX(float fX);
	void setfY(float fY);
	void setfZ(float fZ);
	//get
	float getfX();
	float getfY();
	float getfZ();
	//destructeur
	~Vecteur();
};

