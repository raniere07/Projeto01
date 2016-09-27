#include <iostream>
#include "ponto.h"

using namespace std;

int main()
{
   
     Ponto p1, p2, p3;
     Ponto p5(p1);
     Ponto p6 = p2;

     Ponto p4(5,6);
     cout << p4.getX() << "," << p4.getY()
          << "\n";

     p1.setX(1); p1.setY(2);
     p2.setX(3); p2.setY(4);
     p3 = p1.add(p2);
     cout << "p3 = (" << p3.getX() <<
   ", " << p3.getY() << ")\n";
    return 0;
}


