#include <iostream>
using namespace std;
void nhap(int &n, int &x)
{
    do {
        cout << "nhap so n: ";
        cin >> n;
        cout << "nhap x ";
        cin >> x;
    }
    while(n<0);
}
int cau_3(int n, int x ) // tinh x^n
{
    int s = 1;
    for(int a = 0; a < n; a++)
    {
        s = s * x;
    }
    return s;
}
int cau_3_ham(int n, int x) // tinh x^n su dung ham.
{
    if(n == 1 )
        return x;
    else if(n == 0)
        return 1;
    else
        return x * cau_3_ham(n-1, x);
}
int main() {
    int n ,x;
    nhap(n,x);
    cout << cau_3(n, x) << endl;
    cout << cau_3_ham(n,x);
    return 0;
}
