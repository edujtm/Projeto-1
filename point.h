#ifndef POINT_H
#define POINT_H


class Point
{
    float x;
    float y;
public:
    Point(float _x = 0.0, float _y = 0.0);
    void setX(float _x);
    void setY(float _y);
    void setXY(float _x, float _y);
    float getX();
    float getY();
    Point add(Point & p1);
    Point sub(Point & p1);
    float norma();
    void translada(float a, float b);
    void imprime();
};

#endif // POINT_H
