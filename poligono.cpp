#include "poligono.h"
#include <iostream>
#include <math.h>

using namespace std;

Poligono::Poligono()
{
    nvert = 0;
}

void Poligono::inserir(Point p1)
{
    vertices[nvert].setX(p1.getX());
    vertices[nvert].setY(p1.getY());
    nvert++;
}

int Poligono::getNvert()
{
    return nvert;
}

float Poligono::calcArea()
{
    if(nvert < 2)
    {
        std::cout << "Impossivel calcular area." << endl;
        return 0.0;
    }
    else
    {
        float soma1=0, soma2=0, area;
        for(int i=0; i<nvert-1; i++)
        {
            soma1 += vertices[i].getX() * vertices[i+1].getY();
            soma2 += vertices[i].getY() * vertices[i+1].getX();
        }
        soma1 += vertices[nvert-1].getX() * vertices[0].getY();
        soma2 += vertices[nvert-1].getY() * vertices[0].getX();
        if(soma1 > soma2)
        {
            area = (soma1 - soma2)/2;
        }
        else
        {
            area = (soma2 - soma1)/2;
        }
        if(area >=0){
            return area;
        }
        return (area * -1);
    }
}

void Poligono::move(float a, float b)
{
    for(int i=0; i<nvert; i++)
    {
        vertices[i].setX(vertices[i].getX() + a);
        vertices[i].setY(vertices[i].getY() + b);
    }
}

void Poligono::rotacionar(Point p1, float angulo)
{
    for(int i=0; i<nvert; i++)
    {
        vertices[i].setX(p1.getX() +(vertices[i].getX() - p1.getX()) * cos(angulo) - (vertices[i].getY() - p1.getY()) * sin(angulo));
        vertices[i].setY(p1.getY() +(vertices[i].getX() - p1.getX()) * sin(angulo) + (vertices[i].getY() - p1.getY()) * cos(angulo));
    }
}

void Poligono::imprime()
{
    if(nvert < 2){
        cout << "Figura não forma um poligono, adicione mais vertices.\n";
    }
    else
    {
        for(int i = 0; i<nvert; i++)
        {
            cout << "(" << vertices[i].getX() << ", " << vertices[i].getY() <<") -> ";
        }
        cout << "(" << vertices[0].getX() << ", " << vertices[0].getY() << ").\n";
    }
}
