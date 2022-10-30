#include <iostream>

using namespace std;

int main()
{
    //input 3 so
    float a,b,c;
    cout << "nhap vao thu 1 ";
    cin >> a;
    cout << "nhap vao so thu 2 ";
    cin >> b;
    cout << "nhap vao thu 3 ";
    cin >> c;

    if(a>b)
    {
        if(b>c)
        {
            cout << c  << b  << a;
        }
        else //b<c
        {
            if(a>c) //a>b, c>b
            {
                cout << b << c << a;
            }
            else //b<a, a<c
            {
                cout << b << a << c;
            }
        }

    }
    else //a<b
    {
        if(b<c)
        {
            cout << a << b << c;
        }
        else //b>c
        {
            if(a>c)
            {
                cout << c << a << b;
            }
            else
            {
                cout << a << c << b;
            }
        }

    }


}