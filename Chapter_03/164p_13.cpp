#include <iostream>
#include <string>
using namespace std;
int main()
{
    string password;
    bool num = false;
    bool lower = false;
    bool upper = false;

    cout << "암호를 입력하시오: ";
    getline(cin, password);

    for(int i = 0; i < password.length(); i++)
    {
        if(password.at(i) >= '0' && password.at(i) <= '9' && num != true)
        {
            num = true;
        }
        if(password.at(i) >= 'a' && password.at(i) <= 'z' && lower != true)
        {
            lower = true;
        }
        if(password.at(i) >= 'A' && password.at(i) <= 'Z' && upper != true)
        {
            upper = true;
        }
    }
    if(num && lower && upper)
    {
        cout << "안전합니다." << endl;
    }
    else
    {
        cout << "안전하지 않습니다." << endl;
    }
    return 0;
}