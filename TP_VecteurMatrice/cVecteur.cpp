#include "cVecteur.h"
#include <iostream>

cVecteur::cVecteur(float fltX2, float fltY2, float fltZ2)
{
	this->fltX = fltX2;
	this->fltY = fltY2;
	this->fltZ = fltZ2;
}

std::ostream& operator<<(std::ostream& os, const cVecteur& pt)
{
	return os << "X:" << pt.fltX << "\n Y:" << pt.fltY << "\n Z:" << pt.fltZ << std::endl;

}

cVecteur prod2(cVecteur &vect1, cMatrice &mat1)
{
    float fltX, fltY, fltZ;

    fltX = mat1.NMat[0][0] * vect1.fltX + mat1.NMat[0][1] * vect1.fltY + mat1.NMat[0][2] * vect1.fltZ;
    fltY = mat1.NMat[1][0] * vect1.fltX + mat1.NMat[1][1] * vect1.fltY + mat1.NMat[1][2] * vect1.fltZ;
    fltZ = mat1.NMat[2][0] * vect1.fltX + mat1.NMat[2][1] * vect1.fltY + mat1.NMat[2][2] * vect1.fltZ;

    return cVecteur(fltX, fltY, fltZ);
}



