#include <iostream>
#include <string>
using namespace std;
typedef int *intpointer;
/*
void nhap_chuoi(char a[])
{
    gets(a);
}
void tinh_n_giai_thua(int n )
{
    int s = 1;
    for(int i = 1; i <=n; i++)
    {
        s = s * i;
    }
    cout << s;
}
int tinh_n_giai_thua_recrusion(int n)
{
    if(n == 1) return 1;
    else
       return n * tinh_n_giai_thua_recrusion(n-1);
}
void tinh_x_mu_n(int n)
{
    int x;
    cout << "nhap x: ";
    cin >> x;
    int s = x;
    for(int i =1; i < n; i++)
    {
        s = s*x;
    }
    cout << s;
    cout << endl;
}
void tinh_n_2_giaithua(int n)
{
    if(n %2 != 0)
    {
        int s = 1;
        for(int i = 1; i <=n; i+=2)
        {
            s = s * i;
        }
        cout << s << endl;
    }
    if(n %2 == 0)
    {
        int s_1 = 2;
        for(int i = 1; i <= n; i+=2)
        {
            s_1 = s_1 * i;
        }
        cout << s_1<<endl;

    }
}
void xuat_so_nguoc_lai(int n)
{
    int tmp;
    int s = 0;
    while(n > 0)
    {
        tmp = n%10;
        n = n /10;
        s = s*10 + tmp;
    }
    cout << s << endl;
}
void xuat_so_nguoc_lai_string(char a[])
{
    int tmp;
    int n = strlen(a);
    for(int i = 0; i < n; i++)
    {
        tmp = a[i];
        a[i] = a[n-1];
        a[n-1] = tmp;

        n = n -1;
    }
    for(int i = 0; i < strlen(a); i++)
    {
        cout << a[i];
    }
}
 */
void nhap_mang(int *&a, int &n){
    cout << "nhap chieu dai mang: ";
    cin >> n;
    a = new int[n];
    for(int i = 0; i < n; i++)
    {
        cout << "nhap a" << "[" << i << "]";
        cin >> a[i];
    }
}//nhap mang su dung cap phat dong va pointer;
void xuat_mang(int *a, int n)
{
    cout << "mang vua nhap la: ";
    for(int i =0;i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void tong_cac_phan_tu_trong_mang(int *a, int n)
{
    int s = 0;
    for(int i = 0; i< n; i++)
    {
        s = s + a[i];
    }
    cout << "sum cac ptu = " << s;
}
void numbers_smaller_even_20(int *a, int n)
{
    cout << endl;
    cout << "numbers that even and smaller than 20: ";
    for(int i = 0; i < n;i++)
    {
        if(a[i] % 2 == 0 && a[i] < 20)
        {
            cout << a[i] << " ";
        }
    }
}
void pos_of_smallest_numb(int *a, int n)
{
    cout << endl;
    cout << "posstion of smallest numbers in array: ";
    int min = a[0];
    for(int i = 1; i < n; i++)
    {
        if(a[i] < min)
            min = a[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(min == a[i])
            cout << i;
    }

}
void reversed_array(int *a, int n)
{
    cout << endl;
    cout << "the reverse of array: ";

    for(int i = n-1; i >=0 ; i--)
    {
        cout << a[i] << " ";
    }

}
int main()
{
    intpointer a;
    int n;
    nhap_mang(a,n);
    xuat_mang(a,n);
    tong_cac_phan_tu_trong_mang(a,n);
    numbers_smaller_even_20(a,n);
    pos_of_smallest_numb(a,n);
    reversed_array(a,n);
    /*
    char a[100];
    //unsigned int n;
    //cin >> n;
    nhap_chuoi(a);
    //tinh_n_giai_thua(n);
    //cout << endl;
    //cout << tinh_n_giai_thua_recrusion(n);
    //cout << endl;
    //tinh_x_mu_n(n);
    //tinh_n_2_giaithua(n);
    //xuat_so_nguoc_lai(n);
    xuat_so_nguoc_lai_string(a);
     */
}