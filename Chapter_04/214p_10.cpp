#include <iostream>
#include <stdlib.h>
using namespace std;
class BankAccount
{
    string number;
    int balance;
public:
    void init(string number_outside, int balance_outside)
    {
        number = number_outside;
        balance = balance_outside;
        print();
    }
    void deposit(int amount)
    {
        balance += amount;
        cout << "after deposit(" << amount << ") ";
        print();
    }
    void withdraw(int amount)
    {
        balance -= amount;
        cout << "after withdraw(" << amount << ") ";
        print();
    }
    void print()
    {
        cout << "ÇöÀç ÀÜ¾× : " << balance << endl;
    }
};

int main()
{
    BankAccount obj;
    obj.init("3333211594793", 1000000);
    obj.deposit(1000000);
    obj.withdraw(1000000);

    return 0;
}
