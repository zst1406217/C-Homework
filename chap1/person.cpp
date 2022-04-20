#include <iostream>
using namespace std;
class PERSON
{
public:
    char name[20];
    int age;
    // void set(const char *nm, int ag)
    // {
    //     strcpy(name, nm);
    //     age = ag;
    // }
    void set()
    {
        cout << "请输入姓名：";
        cin >> name;
        cout << "请输入年龄：";
        cin >> age;
    }
    void whoami()
    {
        cout << "姓名：" << name << endl;
    }
    void whatage()
    {
        cout << "年龄：" << age << endl;
    }
};

int main()
{
    PERSON zst;
    // zst.set("zst", 19);
    zst.set();
    zst.whoami();
    zst.whatage();
}