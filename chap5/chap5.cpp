#include <iostream>
using namespace std;
class Complex
{
public:
    Complex()
    {
        real = 0;
        imag = 0;
    }
    Complex(int a, int b)
    {
        real = a;
        imag = b;
    }
    Complex complex_add(Complex a)
    {
        Complex b;
        b.real = real + a.real;
        b.imag = imag + a.imag;
        return b;
    }
    Complex complex_add(int a)
    {
        Complex b;
        b.real = real + a;
        b.imag = imag;
        return b;
    }
    void display()
    {
        cout << real << "+" << imag << "i" << endl;
    }
    friend Complex add_two_complex(Complex a, Complex b);

private:
    double real;
    double imag;
};
Complex add_two_complex(Complex a, Complex b)
{
    Complex x;
    x.real = a.real + b.real;
    x.imag = a.imag + b.imag;
    return x;
}
int main()
{
    Complex x(1, 2), y(2, 3), z;
    x = x.complex_add(y);
    x.display();
    x = x.complex_add(1);
    x.display();
    z = add_two_complex(x, y);
    z.display();
}