#include <iostream>
using namespace std;
int main()
{
    int hour, min, sec, total_sec;
    cout << "�� : ";
    cin >> hour;
    cout << "�� : ";
    cin >> min;
    cout << "�� : ";
    cin >> sec;

    hour = hour * 3600;
    min = min * 60;
    total_sec = hour + min + sec;

    cout << "��ü �� : " << total_sec << endl;
}