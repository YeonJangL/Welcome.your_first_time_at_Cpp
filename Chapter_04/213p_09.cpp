#include <iostream>
using namespace std;
class Triangle
{
public:
    int b, h;

    void area(int b_outside, int h_outside)
    {
        b = b_outside;
        h = h_outside;
    }
    void print()
    {
        cout << "밑변이 " << b << "이고 높이가 " << h << "인 삼각형의 면적: " << ((double)b * (double)h) / 2. << endl;
    }
};

int main()
{
    Triangle obj;
    obj.area(3, 4);
    obj.print();
}