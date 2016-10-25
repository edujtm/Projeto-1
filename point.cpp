#include "point.h"
#include <cmath>
#include <iostream>

//Construtor da classe que funciona nas formas
//Point ponto1(valorX, valorY)
//Point ponto1 = Point(valorX, valorY)
//Point ponto1;
Point::Point(float _x, float _y)
{
    x = _x;
    y = _y;
}

//Define o valor de X
void Point::setX(float _x)
{
    x = _x;
}

//Define um valor para Y
void Point::setY(float _y)
{
    y = _y;
}

//Define um valor para x e y simultaneamente
void Point::setXY(float _x, float _y)
{
    x = _x;
    y = _y;
}

//Retorna o valor de x
float Point::getX()
{
    return x;
}

//Retorna o valor de y
float Point::getY()
{
    return y;
}

//Soma os valores x e y de dois pontos e retorna um novo
//com o resultado
Point Point::add(Point & p1)
{
    Point p2;
    p2.x = x + p1.x;
    p2.y = y + p1.y;
    return p2;
}

//Subtrai os valores x e y de dois pontos e retorna um novo
//com o resultado
Point Point::sub(Point & p1)
{
    Point p2;
    p2.x = x - p1.x;
    p2.y = y - p1.y;
    return p1;
}

//Retorna o valor da distancia do ponto em relação a origem
float Point::norma()
{
    float res;
    res = sqrt(x*x + y*y);
    return res;
}

//Move o ponto de (x, y) para (x+a, y+b)
void Point::translada(float a, float b)
{
    x = x + a;
    y = y + b;
}

//Imprime os valores de x e y no formato (x, y)
void Point::imprime()
{
     using std::cout;
     cout << "(" << x << ", " << y << ")\n";
}
