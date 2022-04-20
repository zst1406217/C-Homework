#include <iostream>
using namespace std;
class Shape
{
protected:
    double x, y;

public:
    void set(double i, double j)
    {
        x = i;
        y = j;
    }
    virtual void area() = 0;
};
class Triangle : public Shape
{
public:
    void area() { cout << "三角形面积： " << 0.5 * x * y << endl; }
};
class Rectangle : public Shape
{
public:
    void area() { cout << "矩形面积：" << x * y << endl; }
};
int main()
{
    Shape *p1, *p2;
    p1 = new Triangle;
    p2 = new Rectangle;
    p1->set(2, 3);
    p2->set(2, 3);
    p1->area();
    p2->area();
}