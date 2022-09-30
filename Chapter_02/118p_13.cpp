#include <iostream>
using namespace std;
int main()
{
    int num_1 = 0, num_2 = 1;
    int answer = 0;

    for(int i = 0; i < 10; i++)
    {
        cout << answer << ", ";
        num_1 = answer;
        answer = num_1 + num_2;
        num_2 = num_1;
    }
    cout << "¡¦" << endl;
    return 0;
}