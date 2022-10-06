#include <iostream>
using namespace std;
class Complex
{
public:
    double r;
    double i;
    
    void init(double r_outside, double i_outside)
    {
        r = r_outside;
        i = i_outside;
    }
    void print()
    {
        if(i >= 0)
        {
            cout << r << " + " << i << "i" << endl;
        }
        else
        {
            cout << r << " - " << -i << "i" << endl;
        }
    }
};

int main()
{
    Complex obj;
    obj.init(5, 3);
    obj.print();
    obj.init(3, -4);
    obj.print();
    
    return 0;
}