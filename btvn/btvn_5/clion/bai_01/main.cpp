#include <iostream>
using namespace std;
void nhapmang(int a[], int n)
{
   for(int i = 0; i < n; i++)
   {
       cin >> a[i];
   }
}
/*void xuatmang(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout <<  a[i];
    }
}
*/
void tong_cac_phan_tu(int a[], int n)
{
    int s = 0;
    for(int i = 0; i < n; i++)
    {
        s = s + a[i];
    }
    cout << s <<endl;
}
void so_lan_xuat_hien(int a[], int n)
{
    int x;
    cout << "nhap so can kiem tra: ";
    cin >> x;
    int s = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == x)
            s++;
    }
    cout << s << endl;
}
void cac_phan_tu_chan_nho_hon_20(int a[], int n)
{
    for(int i = 0;i < n; i++)
    {
        if(a[i] % 2 == 0)
            cout << a[i] << endl;
    }
}
void vi_tri_phan_tu_nho_nhat(int a[], int n)
{
    int min = a[0];
    for(int i = 1; i<n; i++)
    {
        if(a[i] < min)
            min = a[i];
    }
    for(int i = 0; i< n; i++)
    {
        if(min == a[i])
            cout << "vi tri phan tu nho nhat la: " << i << endl;

    }
}
void xuat_day_dao_nguoc(int a[], int n)
{
    int b;
    int c = n;
    for(int i = 0; i < c; i++)
    {
        b = a[i];
        a[i] = a[c-1];
        a[c-1] = b;
        c = c - 1;
    }
    for(int i = 0; i < n; i++)
        cout << a[i];
}
int main() {
    int n;
    int a[100];
    cout << "nhap chieu dai mang: ";
    cin >> n;
    nhapmang(a, n);
    cout << "tong cac phan tu trong mang:" << endl;
    tong_cac_phan_tu(a, n);
    so_lan_xuat_hien(a, n);
    cout << "cac phan tu chan nho hon 20:"<< endl;
    cac_phan_tu_chan_nho_hon_20(a, n);
    vi_tri_phan_tu_nho_nhat(a, n);
    xuat_day_dao_nguoc(a, n);
}