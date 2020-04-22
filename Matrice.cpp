#include "Matrice.h"
#include "Numar_Complex.h"
#include <bits/stdc++.h>
#define MAX_SIZE 100


Matrice::Matrice(Numar_Complex val, int n, int m)
{
    this->lin=n;
    this->col=m;
    w=new Numar_Complex*[lin];
    for(int i=0; i<lin; i++)
        w[i]=new Numar_Complex[col];
    for(int i=0; i<lin; i++)
        for(int j=0; j<col; j++)
            w[i][j]=val;
}
Matrice::Matrice( int n, int m)
{
    this->lin=n;
    this->col=m;
    w=new Numar_Complex*[lin];
    for(int i=0; i<lin; i++)
        w[i]=new Numar_Complex[col];
    Numar_Complex value(0,0);
    for(int i=0; i<lin; i++)
        for(int j=0; j<col; j++)
            w[i][j]=value;
}
Matrice::Matrice()
{
    this->lin=MAX_SIZE;
    this->col=MAX_SIZE;
    w=new Numar_Complex*[lin];
    for(int i=0; i<lin; i++)
        w[i]=new Numar_Complex[col];
    Numar_Complex value(0,0);
    for(int i=0; i<lin; i++)
        for(int j=0; j<col; j++)
            w[i][j]=value;
}
Matrice::~Matrice()
{
    for(int i=0; i<lin; i++)
        delete []w[i];
    delete []w;
}
Matrice::Matrice(const Matrice& old):lin(old.lin),col(old.col)
{

    w=new Numar_Complex*[lin];
    for(int i=0; i<lin; i++)
        w[i]=new Numar_Complex[col];
    for(int i=0; i<lin; i++)
        for(int j=0; j<col; j++)
            w[i][j]=old.w[i][j];

}
Matrice Matrice::operator=(const Matrice&other)
{

    if(this==&other)return *this;
    for(int i=0; i<lin; i++)
        delete []w[i];
    delete []w;
    lin=other.lin;
    col=other.col;
    w=new Numar_Complex*[lin];
    for(int i=0; i<lin; i++)
        w[i]=new Numar_Complex[col];
    for(int i=0;i<lin;i++)
        for(int j=0;j<col;j++)
          w[i][j]=other.w[i][j];
    return *this;

}

std::ostream&operator<<(std::ostream&out, const Matrice &m)
{


    for(int i=0;i<m.lin;i++)
    {
        for(int j=0;j<m.col;j++)
          out<<m.w[i][j]<<" ";
        out<<"\n";

    }

    return out;

}
std::istream &operator>>(std::istream&in, Matrice &m)
{
    for(int i=0; i<m.lin; i++)
        delete []m.w[i];
    delete []m.w;
    in>>m.lin>>m.col;
    m.w=new Numar_Complex*[m.lin];
    for(int i=0; i<m.lin; i++)
        m.w[i]=new Numar_Complex[m.col];

    for(int i=0;i<m.lin;i++)
        for(int j=0;j<m.col;j++)
          in>>m.w[i][j];
   return in;

}
