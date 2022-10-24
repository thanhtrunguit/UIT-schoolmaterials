#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a,b,c,del;
    cout << "nhap he so a:";
    cin >> a;
    cout << "nhap he so b:";
    cin >> b;
    cout << "nhap he so c:";
    cin >> c;
    cout << a << "x^2" << "+" << b << "x" << "+" << c << endl;

    del = pow(b,2) - 4*a*c;

    if(a == 0)
    {
        if(b == 0)
        {
            if(c == 0)
            {
                cout << "vo so nghiem";
            }
            else // c !=0
            {
                cout << "vo nghiem";
            }
        }
        else //b != 0
        {
            cout << "x = " << (-c)/b;
        }
    }
    else // a!=0
    {
        if (del > 0)
        {
           cout << "x1 = " << ((-b)+ (sqrt(del)))/(2*a) << endl;
           cout << "x2 = " << ((-b)- (sqrt(del)))/(2*a);
        }
        else if(del == 0)
        {
            cout << "nghiem kep: " << (-b)/(2*a);
        }
        else
        {
            cout << "nghiem ao";
        }
    }

}
