#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

class Dice
{
public:
    int face;

    int roll()
    {
        face = (int) (rand() % 6 + 1);
        return face;
    }
};

int main()
{
    Dice obj;
    int face, cnt;

    srand(time(NULL));
    for(int i = 0; i < 2; i++)
    {
        cout << "주사위 값=" << obj.roll() << endl;
    }
}