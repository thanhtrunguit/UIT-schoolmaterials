#include <iostream>
using namespace std;

void nhap_so_nguyen_duong(int &n)
{
    do
    {
        cout << "nhap n ";
        cin >> n;
    }
    while(n<0);
}
int cau_2_a(int n)
{
    if(n == 1)
        return 1;
    else
        return n + cau_2_a(n-1);
}
int cau_2_b(int n)
{
    if (n == 1 ) {
        return 12;
    }
    else {
        return n*10+2 + cau_2_b(n-1);
    }
}
/*
int cau_2_b_vong_lap(int n)
{
    int s = 0;
    for(int i =12; i <= (n*10 + 2); i +=10)
    {
        s = s + i;
    }
    return s;
}
 */
float cau_2_c(int n)
{
    if(n == 1)
        return 1;
    else
        return 1.0/n + cau_2_c(n-1);
}
int cau_2_d_giai_thua(int n)
{
    if(n == 1 )
        return 1;
    else
        return n * cau_2_d_giai_thua(n-1);

}
int cau_2_d_tong_giai_thua(int n)
{
    if(n == 1)
        return 1;
    else
        return cau_2_d_giai_thua(n) + cau_2_d_tong_giai_thua(n-1);
}
int main() {
    int n;
    nhap_so_nguyen_duong(n);
    cout << "1 + 2 + 3 + ...+ n" << " = " << cau_2_a(n) << endl;
    cout << "12 + 22 + 32 + .. + n2 " << " = "<< cau_2_b(n) << endl;
    //cout << cau_2_b_vong_lap(n);
    cout << "1 + 1/2 + 1/3 + ... + 1/n "<< " = " << cau_2_c(n) << endl;
    cout << "1! + 2! + ... + n! " << " = " << cau_2_d_tong_giai_thua(n) << endl;
    return 0;
}
