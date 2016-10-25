#ifndef POLIGONO_H
#define POLIGONO_H
#include "point.h"


class Poligono
{
    Point vertices[100];
    int nvert = 0;
public:
    Poligono();
    void inserir(Point p1);
    int getNvert();
    float calcArea();
    void move(float a, float b);
    void rotacionar(Point p1, float angulo);
    void imprime();
};

#endif // POLIGONO_H
