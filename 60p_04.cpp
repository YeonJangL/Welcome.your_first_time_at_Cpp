#include <iostream>
using namespace std;
int main()
{
    int L, W, H, volume, surface;
    cout << "���� : ";
    cin >> L;
    cout << "�ʺ� : ";
    cin >> W;
    cout << "���� : ";
    cin >> H;

    volume = L * W * H;
    surface = (L * W) + (L * H) + (H * W);

    cout << "������ ���� : " << volume << endl;
    cout << "������ ǥ���� : " << surface * 2 << endl;
}