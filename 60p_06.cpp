#include <iostream>
using namespace std;
int main()
{
    int hour, min, sec, total_sec;
    cout << "시 : ";
    cin >> hour;
    cout << "분 : ";
    cin >> min;
    cout << "초 : ";
    cin >> sec;

    hour = hour * 3600;
    min = min * 60;
    total_sec = hour + min + sec;

    cout << "전체 초 : " << total_sec << endl;
}