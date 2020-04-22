#include<iostream>
#include"Matrice_oarecare.h"
#include"Numar_complex.h"
#include <bits/stdc++.h>
#define MAX_SIZE 100
#include"Matrice.h"

/*std::ostream&operator<<(std::ostream&out, const Matrice_oarecare &m)
{


    for(int i=0;i<m.lin;i++)
    {
        for(int j=0;j<m.col;j++)
          out<<m.w[i][j]<<" ";
        out<<"\n";

    }

    return out;

}
std::istream &operator>>(std::istream&in, Matrice_oarecare &m)
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

}*/
/*Matrice_oarecare::Matrice_oarecare(int lin,int col):Matrice(Matrice a)
{w[lin][col]=a;

}*/
