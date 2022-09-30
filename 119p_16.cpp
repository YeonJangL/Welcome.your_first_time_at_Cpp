#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    int cash = 50; // 금액 변수
    int bets = 0; // 배팅 횟수
    int win = 0;  // 이긴 횟수
    double avg;   // 평균 배팅 횟수
    
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
    cout << "초기 금액 $50" << endl;
    cout << "목표 금액 $250" << endl;
    cout << "1000번 중의 " << win << "번 승리" << endl;
    cout << "이긴 확률 : " << (double)win / 10. << endl;
    cout << "평균 배팅 횟수 : " << (double)bets / .100 << endl;

    return 0;
}