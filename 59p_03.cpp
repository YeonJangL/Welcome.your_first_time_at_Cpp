#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int first, second, side;
    cout << "첫 번째 변 : ";
    cin >> first;

    cout << "두 번째 변 : ";
    cin >> second;

    side = sqrt(pow(first, 2) + pow(second, 2));

    cout << "빗변 길이 : " << side << endl;
    
    return 0;
}