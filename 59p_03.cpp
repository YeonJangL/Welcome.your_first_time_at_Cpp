#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int first, second, side;
    cout << "ù ��° �� : ";
    cin >> first;

    cout << "�� ��° �� : ";
    cin >> second;

    side = sqrt(pow(first, 2) + pow(second, 2));

    cout << "���� ���� : " << side << endl;
    
    return 0;
}