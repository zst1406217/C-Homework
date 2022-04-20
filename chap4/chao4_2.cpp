#include <iostream>
using namespace std;
class Rectangle
{
public:
    double price()
    {
        return (a * b * c) * 10;
    }
    Rectangle(double a_default = 5, double b_default = 5, double c_default = 5)
    {
        a = a_default;
        b = b_default;
        c = c_default;
    }

private:
    double a, b, c;
};
static double sum = 0;
void price_sum(Rectangle rec)
{
    sum += rec.price();
}
int main()
{
    Rectangle rec1, rec2(1, 2, 3), rec3(2, 2, 2), rec4(3, 3, 3);
    Rectangle rec[4] = {rec1, rec2, rec3, rec4};
    for (int i = 0; i < 4; i++)
    {
        price_sum(rec[i]);
    }
    cout << "总价为" << sum << endl;
}