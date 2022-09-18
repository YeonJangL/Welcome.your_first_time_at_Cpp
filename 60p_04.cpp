#include <iostream>
using namespace std;
int main()
{
    int L, W, H, volume, surface;
    cout << "길이 : ";
    cin >> L;
    cout << "너비 : ";
    cin >> W;
    cout << "높이 : ";
    cin >> H;

    volume = L * W * H;
    surface = (L * W) + (L * H) + (H * W);

    cout << "상자의 부피 : " << volume << endl;
    cout << "상자의 표면적 : " << surface * 2 << endl;
}