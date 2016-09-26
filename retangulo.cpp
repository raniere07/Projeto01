#include "retangulo.h"
#include "poligono.h"

Retangulo::Retangulo(int x, int y, int largura, int altura)
{
    Ponto x0 = x; y0 = y;
    getX = largura; getY = altura;
}
 Retangulo::~Retangulo(){}

