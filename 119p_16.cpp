#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    int cash = 50; // �ݾ� ����
    int bets = 0; // ���� Ƚ��
    int win = 0;  // �̱� Ƚ��
    double avg;   // ��� ���� Ƚ��
    
    while(true)
    {
        bets++;
        if((double)rand() / RAND_MAX < 0.5)
        {
            cash++;
            if(bets <= 1000)
            {
                win++;
            }
        }
        else
        {
            cash--;
        }
        if(cash <= 0 || cash >= 250)
        {
            break;
        }
    }
    cout << "�ʱ� �ݾ� $50" << endl;
    cout << "��ǥ �ݾ� $250" << endl;
    cout << "1000�� ���� " << win << "�� �¸�" << endl;
    cout << "�̱� Ȯ�� : " << (double)win / 10. << endl;
    cout << "��� ���� Ƚ�� : " << (double)bets / .100 << endl;

    return 0;
}