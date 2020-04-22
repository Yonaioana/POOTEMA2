#ifndef MATRICE_H_INCLUDED
#define MATRICE_H_INCLUDED
#include "Numar_Complex.h"
class Matrice
{
protected:
    int lin,col;
    Numar_Complex **w;
    ///Node **w;
public:
    int get_lin(){return lin;}
    int get_col(){return col;}
    Matrice(Numar_Complex, int , int);
    Matrice( int , int);
    Matrice();
    ~Matrice();
    Matrice(const Matrice&);

    Matrice operator =(const Matrice&);
    friend std::ostream&operator<<(std::ostream&, const Matrice&);
    friend std::istream&operator>>(std::istream&, Matrice&);



};




#endif // MATRICE_COMPLEXA_H_INCLUDED
