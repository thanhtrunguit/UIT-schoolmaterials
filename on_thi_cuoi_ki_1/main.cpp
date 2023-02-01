#include <iostream>
using namespace std;
void nhap_mang(int* &p, int n)
{
    p = new int[n];
    for(int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
}
void xuat_mang(int *p, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << p[i];
    }
}
int double1(int* x)
{
    *x = *x * 2;
    return *x;
}
int main()
{
    int n;
    int *a;
    cout << "nhap so phan tu cua mang: ";
    cin >> n;
    nhap_mang(a, n);
    xuat_mang(a, n);
    cout << endl;
    cout << n << endl;
    cout << double1(&n);


}
