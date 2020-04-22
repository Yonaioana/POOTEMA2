#ifndef MATRICE_OARECARE_H_INCLUDED
#define MATRICE_OARECARE_H_INCLUDED
#include"Matrice.h"
#include"Numar_Complex.h"
#include"Matrice_oarecare.cpp"
class Matrice_oarecare:virtual public Matrice{
public:
    Matrice_oarecare(int ,int );
    Matrice_oarecare operator=(const Matrice_oarecare&);
friend std::istream & operator >>(std::istream & input,Matrice & m);


};
#endif // MATRICE_OARECARE_H_INCLUDED
