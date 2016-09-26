#ifndef POLIGONO_H
#define POLIGONO_H
#include "ponto.h"


class Poligono
{
private:
    int Pontos;

protected:
    Ponto Aux[100];

public:

    Poligono(int n);

    ~Poligono();

    Ponto translada(float abc, float ord);

    int Area(int a);

    Poligono imprime(Ponto Aux);
};

#endif // POLIGONO_H
