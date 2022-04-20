#ifndef STACK_H_
#define STACK_H_
#include <iostream>

template <class T>
class Stack
{
private:
    int front, rear, count, length; //队头指针、队尾指针、元素个数、长度
    T *data;

public:
    Stack(int); //构造函数，生成对象时自动执行
    void push(T);
    T pop();
    T first() const;
    T end() const;
    bool isEmpty() const;
    int size() const;
    ~Stack(); //析构函数，撤销对象时自动执行
};

#endif