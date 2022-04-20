#include <iostream>
using namespace std;
int main()
{
    double a[3] = {1.12223, 1.22345, 1.00};
    double *c;
    c = a;
    char *b;
    b = (char *)&a;
    double *p = (double *)(b);
    cout << p[0] << endl;
    cout << ((double *)(b))[1] << endl;
    cout << ((double *)(b))[2] << endl;
}