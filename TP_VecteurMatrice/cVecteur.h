#pragma once
#include <iostream>
#include "cMatrice.h"

class cVecteur
{
	
protected:
	//données membre de la classe
	float fltX, fltY, fltZ;

public:
	//ptototypes

	//constructeur
	cVecteur(float fltX2, float fltY2, float fltZ2);

	//affichage par surcharge du flux de sortie (cout)
	friend std::ostream& operator<<(std::ostream& os, const cVecteur &pt);

	//
	friend cVecteur cMatrice::prod(cVecteur &vect1);

	//
	friend cVecteur prod2(cVecteur &vect1, cMatrice &mat1);
};

