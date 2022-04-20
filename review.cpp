#include <iostream>
using namespace std;
class S
{
public:
    static int count;
    S();
    ~S();
};
int S::count = 0;
S::S()
{
    if (count == 0)
    {
        count++;
    }
    else
    {
        return;
    }
}
S::~S()
{
    if (count == 1)
    {
        count--;
    }
};
int main()
{

    S s1;
    S s2;
}