#pragma once

//d�claration foward
class cVecteur;

class cMatrice
{
private:
	
	//donn�es membre de la classe
	int NMat[3][3] = { 0 };

public:
	//prototypes

	//constructeur
	cMatrice(int nTemp);

	//affichage
	void afficheMatrice();

	//prod membre de matrice mais ami de vecteur
	cVecteur prod(cVecteur &vect1);

	//fonction prod ami de matrice et vecteur mais ind�pendant
	friend cVecteur prod2(cVecteur &vect1, cMatrice &mat1);


};

