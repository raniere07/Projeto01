#ifndef RETANGULO_H
#define RETANGULO_H


class Retangulo
{
    Ponto x,y,z,d;
public:
    Retangulo(int x, int y, int largura, int altura);
    ~Retangulo();
    Retangulo imprime(int x,int y, int altura, int largura);

};

#endif // RETANGULO_H

