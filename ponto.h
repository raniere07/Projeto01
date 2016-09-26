#ifndef PONTO_H
#define PONTO_H


class Ponto
{

private:

    float x, y;

public:

    Ponto(float mx=0, float my=0);

    ~Ponto();

    Ponto(Ponto &p);

    void setX(float mx);

    float getX(void);

    void setY(float my);

    float getY(void);

    void setXY(float mx , float my);

    Ponto add(Ponto p1);

    Ponto sub(Ponto p1);

    Ponto norma();

    Ponto translada(float a);

    Ponto imprime(Ponto ret);
};
#endif // PONTO_H
