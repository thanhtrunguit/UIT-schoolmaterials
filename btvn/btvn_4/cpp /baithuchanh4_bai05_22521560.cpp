#include <iostream>
#include <cmath>
using namespace std;
void nhap(int &n)
{
    do {
        cout << "nhap n ";
        cin >> n;

    }
    while(n<0);
    
}
int cau_5(int n)
{
    int tmp;
    int s = 0;
    int i = 0;
    while(n>0)
    {
        tmp = n%10;
        n = n /10;
        s = s + tmp*pow(2, i);
        i++;
    }
    return s;


}
int main() {
    int n;
    nhap(n);
    cout << cau_5(n);
    return 0;
}
