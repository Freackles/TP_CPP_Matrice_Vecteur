#include "cMatrice.h"
#include "cVecteur.h"
#include <iostream>

cMatrice::cMatrice(int nTemp)
{
    
    for (int nI = 0; nI < 3; nI++)
    {
        for (int nJ = 0; nJ < 3; nJ++)
        {
       
                this->NMat[nI][nJ] = nTemp;
                nTemp++;
            
        }
        nTemp++;
    }

}

void cMatrice::afficheMatrice()
{
    std::cout << "Contenue de la matrice: ";
    for (int nI = 0; nI < 3; nI++)
    {
        for (int nJ = 0; nJ < 3; nJ++)
        {

            std::cout << this->NMat[nI][nJ];
        }
        std::cout << "\n";
    }
}



cVecteur cMatrice::prod(cVecteur &vect1)
{
    float fltX, fltY, fltZ;

    fltX = this->NMat[0][0] * vect1.fltX + this->NMat[0][1] * vect1.fltY + this->NMat[0][2] * vect1.fltZ;
    fltY = this->NMat[1][0] * vect1.fltX + this->NMat[1][1] * vect1.fltY + this->NMat[1][2] * vect1.fltZ;
    fltZ = this->NMat[2][0] * vect1.fltX + this->NMat[2][1] * vect1.fltY + this->NMat[2][2] * vect1.fltZ;

    return cVecteur(fltX,fltY,fltZ);
}


