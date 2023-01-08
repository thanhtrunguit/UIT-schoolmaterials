#include <iostream>
using namespace std;
void nhap(int &n)
{
    do
    {
        cout << "nhap so n: ";
        cin >> n;

    }
    while(n<0);
}
int cau_4(int n)
{
    if(n== 1)
        return 1;
    else if(n == 2)
        return 2;
    else if(n%2 == 0) // kiem tra chan
        return n * cau_4(n-2);
    else if(n%2 != 0) // kiem tra le
        return n* cau_4(n-2);
}
int main()
{
    int n;
    nhap(n);
    cout << cau_4(n);
    return 0;
}
