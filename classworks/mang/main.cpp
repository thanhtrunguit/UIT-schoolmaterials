#include <iostream>
#include <cmath>
using namespace std;
void nhapmang(int a[], int n)
{
    for(int i = 0; i<n;i++) {
        cout << "nhap phan tu thu:"<< (i+1) << " " << "vi tri thu:" <<  i << endl;
        cin >> a[i] ;
    }
}
/*
void xuatmang(int a[], int n)
{
    for(int i = 0; i < n;i++)
    {
        cout<< a[i];
    }
}
 */
int gtln(int a[], int n)
{
    int max = a[0];
    for(int i = 1; i < n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}
int gtnn(int a[], int n)
{
    int min;
    min = a[0];
    for(int i = 1; i<n;i++)
    {
        if(min > a[i])
            min = a[i];
    }
    return min;
}
bool SCP(int n)
{
    if(int(sqrt(n) * int(sqrt(n))) == n)
        return true;
}
bool prime_number(int N)
{
    int count = 0;
        for (int j = 1; j <= N; j++)
        {
            if(N % j == 0)
                count++;
        }
        if(count == 2)
            return true;
}
bool doi_xung(int a[], int N)
{
    for(int i = 0; i< N; i++)
    {
        if(a[i] != a[N-i-1])
        {
            return false; // return false ở đây nếu được thực thi false sẽ là giá trị trả về của cả hàm, vòng lập end.
        }
    }
    return true;

}
/*
bool doi_xung(int a[], int N)
{
    for(int i = 0; i< N; i++)
    {
        if(a[i] == a[N-i-1])
        {
            return true; //nếu làm vậy thì kết quả của hàm trả về luôn là true khi arr có dạng 1 2 3 1, vì nếu a[0] = 1 = a[3] thì if đúng và giá trị trả về của hàm là true, vòng lập end .
        }
    }
    return false;

}
 */
int main()
{
    int N;
    int a[1000];
    cout << "nhap chieu dai mang: ";
    cin >> N;
    nhapmang(a,N);
    //xuatmang(a,N);
    cout << "gia tri lon nhat trong mang la: "<< gtln(a,N) << endl; // gia tri lon nhat trong mang
    cout << "gia tri nho nhat trong mang la: "<< gtnn(a, N) << endl; // gia tri nho nhat trong mang
    for(int i = 0; i< N; i++)  // in ra so chinh phuong trong mang
    {
        if (SCP(a[i]))
            cout << "so cp la " << a[i] << endl;
    }
    for(int i = 0; i< N; i++)
    {

        if(prime_number(a[i]))
        {
            cout << "so nguyen to trong mang la: " << a[i] << endl;
        }
    }
    if(doi_xung(a, N) == true)
    {
        cout << "mang doi xung";
    }
    if (doi_xung(a, N) == false)
    {
        cout << "khong doi xung";

    }
    return 0;

}