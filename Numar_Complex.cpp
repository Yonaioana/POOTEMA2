#include "Numar_Complex.h"
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
Numar_Complex::Numar_Complex(double a, double b)
{
    this->re=a;
    this->im=b;
}
Numar_Complex::Numar_Complex()
{
    this->re=0;
    this->im=0;
}
Numar_Complex::Numar_Complex(const Numar_Complex& old):im(old.im),re(old.re){}
Numar_Complex::~Numar_Complex()
{
    re=0;
    im=0;

}
double Numar_Complex::get_re()const{return re;}
double Numar_Complex::get_im()const{return im;}
void Numar_Complex::set_re(double x){re=x;}
void Numar_Complex::set_im(double x){im=x;}

std::ostream&operator<<(std::ostream&out, const Numar_Complex &c1)
{
    out<<c1.re<<" + "<<c1.im<<"*i";
    return out;

}
std::istream &operator>>(std::istream&in, Numar_Complex &c1)
{
   in>>c1.re>>c1.im;
   return in;

}


Numar_Complex& Numar_Complex:: operator=(const Numar_Complex &other)
{
    if(this==&other)return *this;
    this->re=other.re;
    this->im=other.im;
    return *this;
}
