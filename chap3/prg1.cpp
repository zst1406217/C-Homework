#include <iostream>
using namespace std;

template <class T>
class Array
{
private:
    T *ptr; // 成员指针
    int size;

public:
    Array(T arr[], int s); //传入的 arr 数组为 ptr 指向的数组赋值，s 为输入长度
    void print();          //依次输出数组元素
};
template <class T>
Array<T>::Array(T arr[], int s)
{
    size = s;
    ptr = arr;
}
template <class T>
void Array<T>::print()
{
    for (int i = 0; i < size; i++)
    {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
}

int main()
{
    int a[5] = {1, 3, 5, 7, 9};
    Array<int> myarray(a, 4);
    myarray.print();
}