#include <iostream>
using namespace std;
int main()
{
    const float pyeong = 3.3058;
    float cin_pyeong, pyeong_meter;

    cout << "평 : ";
    cin >> cin_pyeong;

    pyeong_meter = cin_pyeong * pyeong;
    cout << "평방 미터 :" << pyeong_meter << endl;
}