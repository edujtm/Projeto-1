#include "retangulo.h"

Retangulo::Retangulo(float x, float y, float largura, float altura)
{
    Point x1 = Point(x, y);
    Point x2 = Point(x, y+altura);
    Point x3 = Point(x+largura, y+altura);
    Point x4 = Point(x+largura, y);
    this->inserir(x1);
    this->inserir(x2);
    this->inserir(x3);
    this->inserir(x4);
}
