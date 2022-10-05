#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    string name;
    int age;
    int salary;
    int cnt = 1;

    void print_Employee(string name_outside, int age_outside, int salary_outside)
    {
        name = name_outside;
        age = age_outside;
        salary = salary_outside;

        cout << "Enployee" << cnt << ":" << endl;
        cout << name << endl;
        cout << age << endl;
        cout << salary << endl;
    }
};

int main()
{
    Employee obj;
    obj.print_Employee("±èÃ¶¼ö", 38, 2000000);
}