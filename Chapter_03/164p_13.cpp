#include <iostream>
#include <string>
using namespace std;
int main()
{
    string password;
    bool num = false;
    bool lower = false;
    bool upper = false;

    cout << "��ȣ�� �Է��Ͻÿ�: ";
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
        cout << "�����մϴ�." << endl;
    }
    else
    {
        cout << "�������� �ʽ��ϴ�." << endl;
    }
    return 0;
}