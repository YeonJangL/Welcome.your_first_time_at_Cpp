#include <iostream>
using namespace std;
int main()
{
    const float pyeong = 3.3058;
    float cin_pyeong, pyeong_meter;

    cout << "�� : ";
    cin >> cin_pyeong;

    pyeong_meter = cin_pyeong * pyeong;
    cout << "��� ���� :" << pyeong_meter << endl;
}