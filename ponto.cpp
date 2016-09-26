#include "ponto.h"
#include <iostream>

using namespace std;

Ponto::Ponto(float mx, float my)
{
    x = mx; y = my;
}


Ponto::~Ponto(){}


Ponto::Ponto(Ponto &p)
{
    x = p.x;
    y = p.y;
}


void Ponto::setX(float mx)
{
    x = mx;
}


float Ponto::getX(void)
{
    return x;
}


void Ponto::setY(float my)
{
    y = my;
}


float Ponto::getY(void)
{
    return y;
}


void Ponto::setXY(float mx , float my)
{
    x = mx;
    y = my;
}


Ponto Ponto::add(Ponto p1)
{
    Ponto ret;
    ret.x = x + p1.x;
    ret.y = y + p1.y;
    return(ret);
}


Ponto Ponto::sub(Ponto p1)
{
    Ponto ret;
    ret.x = x - p1.x;
    ret.y = y - p1.y;
    return(ret);
}


Ponto Ponto::norma()
{
    Ponto ret;
    ret.x = x;
    ret.y = y;
    return(ret);
}


Ponto Ponto::translada(float a)
{
    Ponto ret;
    ret.x = x+a;
    ret.y = y+a;
    return(ret);
}


Ponto Ponto::imprime(Ponto ret)
{
    cout<<"("<<ret.getX()<<","<<ret.getY()<<")";
}

