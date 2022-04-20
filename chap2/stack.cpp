#include "stack.h"
template <class T>
Stack<T>::Stack(int stk_size)
{
    data = new T[length = stk_size];
    front = 0;
    rear = 0;
    count = 0;
};
template <class T>
void Stack<T>::push(T x)
{
    if (count < length)
    {
        data[rear] = x;
        rear = (rear + 1) % length;
        count++;
    }
    else
        throw "overflow";
};
template <class T>
T Stack<T>::pop()
{
    if (count > 0)
    {
        count--;
        int temp = front;
        front = (front + 1) % length;
        return data[temp];
    }
    else
        throw "underflow";
};
template <class T>
T Stack<T>::first() const
{
    if (count > 0)
        return data[front];
    else
        throw "underflow";
};
template <class T>
T Stack<T>::end() const
{
    if (count > 0)
        return data[(rear + length - 1) % length];
    else
        throw "underflow";
};
template <class T>
int Stack<T>::size() const
{
    return count;
};
template <class T>
bool Stack<T>::isEmpty() const
{
    if (count > 0)
        return false;
    else
        return true;
};
template <class T>
Stack<T>::~Stack()
{
    delete[] data;
};