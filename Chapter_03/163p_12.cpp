#include <iostream>
#include <string>
using namespace std;
int main()
{
    int counter[256] = {0};
    string s;
    int i;
    cout << "문자열을 입력하시오: ";
    getline(cin, s);

    for(i = 0; i < s.size(); i++)
    {
        counter[s[i]]++;
    }
    for(i = 65; i < 91; i++)
    {
        cout << char(i) << ": " << counter[i] << endl;
    }
    for(i = 97; i < 122; i++)
    {
        cout << char(i) << ": " << counter[i] << endl;
    }
    return 0;
}