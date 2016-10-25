#include <QCoreApplication>
#include <iostream>
#include "point.h"
#include "retangulo.h"

using namespace std;

int main()
{
    Point ponto1(0 , 0);
    float largura = 3.0;
    float altura = 4.0;
    Retangulo r1(ponto1.getX(), ponto1.getY(), 3, 4);
    r1.imprime();
    cout << "Area do retangulo em (0,0): " << r1.calcArea() << endl;
    r1.move(-3, 4);
    Point ponto2(-1.5, 2);
    cout << "Area do retangulo em (-3, 4): " << r1.calcArea() << endl;
    r1.rotacionar(ponto2, M_PI/6);
    //Não sei o que houve, mas a area do retangulo está mudando aqui
    cout << "Area do retangulo rotacionado em 30 graus: " << r1.calcArea() << endl;
    return 0;
}
