#ifndef ESFERA_H
#define ESFERA_H

#include "forma.h"

class Esfera: public Forma{
    double raio;
    Esfera(Vertice, double);

    bool intercessao(Vetor, Vertice, double);
};

#endif // ESFERA_H
