#pragma once//exo69
class Vecteur
{
private:
	float fX, fY, fZ, norm1;
	Vecteur* pVecteur;

public:
	//contructeur
	Vecteur(float fX, float fY, float fZ);
	Vecteur();
	//inline Vecteur(float fX = 0.0, float fY = 0.0, float fZ = 0.0);
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
	//exo70
	bool Valcoincide(Vecteur vecteur);
	bool Adcoincide(Vecteur* vecteur);
	bool Refcoincide(Vecteur& vecteur);
	Vecteur normax(Vecteur v, Vecteur v2);
};

