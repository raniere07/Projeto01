#include "poligono.h"
#include "ponto.h"
#include <iostream>

using namespace std;

Poligono::Poligono(int n){
   int i;

   Pontos = n;

    for (i=0; i<n;i++)
     {
        Aux[i].setX(0.0);
        Aux[i].setY(0.0);
     }
  return ;
  }
Poligono::~Poligono(){};

Ponto Poligono::translada(float abc, float ord)
{
    int i,n;
    n=sizeof(Aux);
    Ponto ret;
    for(i=0; i<n; i++)
    {
       ret.setXY((Aux[i].getX() + abc),(Aux[i].getY()+ord));

    }
   return ret;
}

int Poligono::Area(int a)
{

    int i,n,m1,m2,menor,maior;
    n = sizeof(Aux);
    for(i=0; i<n; i++)
    {

        m1 = Aux[i].getX()*Aux[i+1].getY();
        m2 = Aux[i].getY()*Aux[i+1].getX();

          if (m1<m2 )
        {
         menor = m1;
     }
          else(m2<m1 );
        {
          menor = m2;
     }
                if (m1>m2 )
              {
               maior = m1;
           }
                else(m2>m1 );
              {
                maior = m2;
           }

    }

    a = (menor - maior);

     if(a <0){a = a*-1;}

      return a;

}

Poligono Poligono::imprime(Ponto Aux)
{
    int i,n;
    n = sizeof(Aux);
    for(i=0; i<n; i++)
    {
        cout <<"("<< Aux[i].getX()<<","<< Aux[i].getY()<<")";

   }

}

