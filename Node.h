#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED
#include "Numar_Complex.h"
#include"Matrice.h"
#include"Node.h"
class Node
{
private:
    int lin;
    int col;
    Numar_Complex c;
    Node* next;
public:
    friend class Matrice;
    friend class Numar_Complex;};
#endif

