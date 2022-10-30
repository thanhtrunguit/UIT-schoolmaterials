#include <iostream>
using namespace std;

int main()
{
    float n,cayso1,caysolonhon1,caysolonhon5;
    long caysolonhon120;
    cout << "nhap so km: ";
    cin >> n;

    cayso1 = 15000;
    caysolonhon1 = (n - 1)*13500 + cayso1;
    caysolonhon5 = (n - 5)*11000 + 4*13500 + cayso1;
    caysolonhon120 = caysolonhon5*0.9;



        if (n == 1)
        {
            cout << cayso1;
        }
        else if (n > 1 && n <= 5)
        {
            cout << caysolonhon1;
        }
        else if(n>5 && n<=120)
        {
            cout << caysolonhon5;
        }
        else
        {
            cout << caysolonhon120 ;
        }


}
