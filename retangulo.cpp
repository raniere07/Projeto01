#include "retangulo.h"
#include "poligono.h"

Retangulo::Retangulo(int x,int y, int altura, int largura)
{
   Ponto Aux;
   x = Aux[0].getX();
   y = Aux[0].getY();
   int i;
   for(i=0; i<3; i++)
   {
       if(Aux[i].getX()>=Aux[i+1].getX())
       {
           largura = Aux[i].getX();
       }
       else(Aux[i].getX()<=Aux[i+1].getX())
       {
           largura = Aux[i+1].getX();
       }

           if(Aux[i].getY()>=Aux[i+1].getY())
           {
              altura = Aux[i].getY();
           }
           else(Aux[i].getY()<=Aux[i+1].getY())
           {
               altura = Aux[i+1].getY();
           }
   }
Retangulo::~Retangulo();
Retangulo Retangulo::imprime(int x,int y, int altura, int largura)
{
    int i;
    for(i=0; i<3; i++)
    {
        cout<< x << ","<< y+altura <<"|"<< x+largura<<","<<y+altura<<endl<<x<<","<<y<<"|"<<x+largura<<y<<endl;
    }
}

}


