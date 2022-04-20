#include <iostream>
#include <string.h>
using namespace std;
class String
{
public:
    String(const char *str = NULL);        // 构造函数
    String(const String &other);           // 拷贝构造函数
    ~String(void);                         // 析构函数
    String &operator=(const String other); // 赋值函数
    void print();

private:
    char *m_data; // 用于保存字符串
};
String::String(const char *str)
{
    if (str != NULL)
    {
        m_data = new char[strlen(str) + 1];
        strcpy(m_data, str);
    }
    else
    {
        m_data = NULL;
    }
}
String::String(const String &other)
{
    m_data = new char[strlen(other.m_data) + 1];
    strcpy(m_data, other.m_data);
}
String::~String(void)
{
    delete[] m_data;
}
String &String::operator=(const String other)
{
    if (this != &other)
    {
        delete[] m_data;
        m_data = new char[strlen(other.m_data) + 1];
        strcpy(m_data, other.m_data);
        return *this;
    }
    else
    {
        cout << "Error" << endl;
        return *this;
    }
}
void String::print()
{
    cout << m_data << endl;
}

int main()
{
    String string1("hello");
    String string2(string1);
    String string3;
    string3 = string1;
    string1.print();
    string2.print();
    string3.print();
}