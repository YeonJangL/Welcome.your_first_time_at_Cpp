#include <iostream>
using namespace std;

class Sum
{
public:
    int n1, n2;

    int init(int x, int y)
    {
        n1 = x;
        n2 = y;
    }
    int add()
    {
        return (n1 + n2);
    }
};

int main()
{
    Sum obj;
    int x, y;
    cout << "ù ��° ���� : ";
    cin >> x;
    cout << "�� ��° ���� : ";
    cin >> y;

    obj.init(x, y);
    cout << "���� ���:" << obj.add() << endl;

    return 0;
}