#ifndef NUMAR_COMPLEX_H_INCLUDED
#define NUMAR_COMPLEX_H_INCLUDED
#include <iostream>
class Numar_Complex{

private:
    double im,re;
public:
    Numar_Complex(double,double);
    Numar_Complex();
    Numar_Complex(const Numar_Complex& );
    ~Numar_Complex();
    double get_re()const;
    double get_im()const;
    void set_re(double);
    void set_im(double);

    friend std::ostream&operator<<(std::ostream&, const Numar_Complex&);
    friend std::istream&operator>>(std::istream&, Numar_Complex&);
    friend class Matrice_Complexa;

    Numar_Complex& operator =(const Numar_Complex&);

};

#endif // NUMAR_COMPLEX_H_INCLUDED
