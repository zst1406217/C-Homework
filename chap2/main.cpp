#include "stack.h"
// #include "stack.cpp"

using namespace std;
int main()
{
    const int N = 5;
    Stack<float> stk(N);
    cout << "添加了：";
    for (int i = 0; i < N; ++i)
    {
        stk.push(i + 0.2);
        cout << i + 0.2 << ' ';
    }
    cout << endl;
    cout << "删除了：";
    while (stk.size() > 2)
        cout << stk.pop() << ' ';
    cout << endl;
    cout << "首元素是：" << stk.first() << endl;
    cout << "尾元素是：" << stk.end() << endl;
    stk.push(1.1);
    cout << "首元素是：" << stk.first() << endl;
    cout << "尾元素是：" << stk.end() << endl;
    cout << "是否空集：" << stk.isEmpty() << endl;
    cout << "元素个数：" << stk.size() << endl;
    cout << "删除了：";
    for (int i = 0; i < 3; i++)
        cout << stk.pop() << ' ';
    cout << endl;
    cout << "是否空集：" << stk.isEmpty() << endl;
}