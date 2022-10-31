#include <iostream>
using namespace std;
int main() {
    float a,b,c;
    float t; // t la min
    cout << "nhap so a: ";
    cin >> a;
    cout << "nhap so b: ";
    cin >> b;
    cout << "nhap so c: ";
    cin >> c;



    if(a>b)
    {
        t = b;
        b = a;
        a = t;

    }
    if(a > c)
    {
        t = c;
        c = a;
        a = t;
    }
    if(b > c)
    {
        t = c;
        c = b;
        b = t;
    }
    cout << a << " " << b << " " << c;
}
