#include <iostream>
using namespace std;

void func(int x)
{
    cout << x;
}

int main()
{
    void (*pi)(int x);
    pi = func;
    (*pi)(5);
}