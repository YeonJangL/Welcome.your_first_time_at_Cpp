#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    int age;

    void setPerson(string name_outside, int age_outside)
    {
        name = name_outside;
        age = age_outside;
    }
    void print()
    {
        cout << "ÀÌ¸§ : " << name << endl;
        cout << "³ªÀÌ : " << age << endl;
    }
};

int main()
{
    Person obj;
    obj.setPerson("±èÃ¶¼ö", 21);
    obj.print();

    return 0;
}