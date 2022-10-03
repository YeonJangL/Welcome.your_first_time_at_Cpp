#include <iostream>
#include <random>
using namespace std;
int flip()
{
    int random = rand() % 2;
    if(random == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int back = 0, front = 0;
    for(int i = 1; i <= 100; i++)
    {
        if(flip() == 1)
        {
            back++;
        }
        else{
            front++;
        }
    }
    cout << "동전의 앞면:  " << front << endl;
    cout << "동전의 뒷면:  " << back << endl;
    return 0;
}