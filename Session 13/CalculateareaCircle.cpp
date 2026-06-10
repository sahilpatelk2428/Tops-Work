#include<iostream>
using namespace std;

class Shape
{
public:
    virtual float calculateArea()
    {
        return 0;
    }
};

class Circle : public Shape
{
public:
    float radius;

    Circle(float r)
    {
        radius = r;
    }

    float calculateArea() override
    {
        return 3.14*radius*radius;
    }
};

int main()
{
    Shape *s;

    Circle c1(5);

    s = &c1;

    cout<<"Area of Circle = " << s->calculateArea();
}
