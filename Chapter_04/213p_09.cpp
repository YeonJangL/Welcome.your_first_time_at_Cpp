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
        cout << "�غ��� " << b << "�̰� ���̰� " << h << "�� �ﰢ���� ����: " << ((double)b * (double)h) / 2. << endl;
    }
};

int main()
{
    Triangle obj;
    obj.area(3, 4);
    obj.print();
}