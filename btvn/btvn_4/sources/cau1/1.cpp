#include <iostream>
#include <cmath>
using namespace std;

void nhap_n(int &n)
{
    do
    {
        cout << "nhap so n: ";
        cin >> n;
    }
    while(n<0);

}
int so_dao_nguoc(int n)
{
    int tmp;
    int s = 0;
    while(n>0)
    {
        tmp = n % 10;
        s = s*10 + tmp;
        n = n /10;
    }
    return s;
}
bool kiem_tra_so_chinh_phuong(int n)
{
    int a = sqrt(n);
    if(a * a == n)
        return true;
    else
        return false;

}
bool kiem_tra_so_nguyen_to(int n)
{
    int tmp = 0;
    for(int i = 1; i <= n; i++)
    {
        if(n%i == 0)
            tmp++;
    }
    if(tmp == 2)
        return true;
    else
        return false;
}
int tong_cac_chu_so_le(int n)
{
    int s = 0;
    int tmp;
    while(n>0)
    {
        tmp = n%10;
        n = n/10;
        if(tmp % 2 !=0)
            s = s + tmp;
    }
    return s;
}
int tong_cac_so_nguyen_to_nho_hon_n(int n)
{
    int s = 0;
    int tmp = 0;
    for(int a = 2; a < n; a++)
    {
        for (int i = 1; i <= a; i++)
        {
            if (a % i == 0)
            {
                tmp++;
            }
        }
        if(tmp == 2)
            s = s + a;
        tmp = 0; // sau moi lan kiem tra a co phai so nguyen to phai tra tmp ve 0 de xet a+1.
    }
    return s;
}
int tong_cac_uoc_so(int n)
{
    int s = 0;
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
            s = s + i;
    }
    return s;
}
int main()
{
    int n;
    nhap_n(n);
    cout << "so dao nguoc cua so n la: " << so_dao_nguoc(n) << endl;
    if(kiem_tra_so_chinh_phuong(n))
        cout << "la so chinh phuong" << endl;
    else
        cout << "khong phai la so chinh phuong" << endl;
    if(kiem_tra_so_nguyen_to(n))
        cout << "la so nguyen to" << endl;
    else
        cout << "khong la no nguyen to" << endl;
    cout << "tong cac chu so le cua n la: " << tong_cac_chu_so_le(n) << endl;
    cout << "tong cac so nguyen to nho hon n " << tong_cac_so_nguyen_to_nho_hon_n(n) << endl;
    cout << "tong cac uoc cua n: " << tong_cac_uoc_so(n);

}

