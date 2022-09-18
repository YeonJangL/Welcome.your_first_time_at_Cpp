#include<iostream>
using namespace std;

int main()
{
    int age;

    cout << "나이 : ";
    cin >> age;

    int add_10_age = age + 10;

    cout << "10년 후에는 " << add_10_age << "살이 됩니다." << endl;
    return 0;
}