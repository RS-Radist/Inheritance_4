//Добавить к программе класс, который будет содержать в себе несколько объектов класса фигура, создавая тем самым композицию.

#include <iostream>


class Square
{
protected:
    int size;
public:
    Square(int _size):size(_size){}
};
class Triangle
{
protected:
    int sizeTriangle;
public:
    Triangle(int _size):sizeTriangle(_size){}
};
class Circle
{
protected:
    double radius;
public:
    Circle(){}
};
class Figure : public Triangle, public Square
{
public:
    Figure(int sizeFigure):Square(sizeFigure), Triangle(sizeFigure){}
};
class View:public Figure
{
public:
    View(int extrimeSize):Figure (extrimeSize){}
};
int main()
{
    View v(10);
   
}
