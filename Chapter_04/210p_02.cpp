#include <iostream>
#include <string>
using namespace std;

class Computer
{
public:
    string name;
    int RAM;
    double cpu_speed;
    
    void setComputer(string name_outside, int RAM_outside, double cpu_speed_outside)
    {
        name = name_outside;
        RAM = RAM_outside;
        cpu_speed = cpu_speed_outside;
    }
    void print()
    {
        cout << "이름: " << name << endl;
        cout << "RAM: " << RAM << endl;
        cout << "CPU: " << cpu_speed << endl;
    }
};

int main()
{
    Computer obj;
    obj.setComputer("오피스컴퓨터", 8, 4.2);
    obj.print();
}