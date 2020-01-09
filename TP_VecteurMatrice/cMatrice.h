#pragma once
#include "cVecteur.h"

class cMatrice
{
private:
	friend class cVecteur;
	//données membre de la classe
	int NMat[3][3];

public:
	//prototypes

	//constructeur
	cMatrice(int nTemp);

	//affichage
	void afficheMatrice();

	//prod membre de matrice mais ami de vecteur
	cVecteur prod(cVecteur &vect1);

	//fonction prod ami de matrice et vecteur mais indépendant
	friend cVecteur prod2(cVecteur &vect1, cMatrice &mat1);


};

