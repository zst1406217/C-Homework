#include <iostream>
using namespace std;
class Person
{
public:
    string name;
    void all_info()
    {
        cout << name << endl;
    }
    Person()
    {
        cin >> name;
    }
};
class Student : virtual public Person
{
public:
    string passed;
    void all_info()
    {
        Person::all_info();
        cout << passed << endl;
    }
    Student()
    {
        cin >> passed;
    }
};
class Mathematician : virtual public Person
{
public:
    string proved;
    void all_info()
    {
        Person::all_info();
        cout << proved << endl;
    }
    Mathematician()
    {
        cin >> proved;
    }
};
class Math_student : public Student, public Mathematician
{
public:
    void all_info()
    {
        cout << name << endl;
        cout << passed << endl;
        cout << proved << endl;
    }
    Math_student() {}
};
int main()
{
    Math_student person1;
    person1.all_info();
}