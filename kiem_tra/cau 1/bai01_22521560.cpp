#include <iostream>
using namespace std;
void input(int *&a, int n)
{
    a = new int[n];
    for(int i = 0; i < n; i++)
    {
        cout << "nhap mang a" << "[" << i << "]";
        cin >> a[i];
    }
}
void cau_a(int *a, int n)
{
    int s = 0;
    for(int i = 0;i < n; i++)
    {
        if(a[i] % 2 != 0)
            s = s + a[i];
    }
    cout <<"cau a: "<< s << endl;
}
void cau_b(int *a, int n, int x)
{
    cout << "nhap x";
    cin >> x;
    int count;
    cout << "cau b: ";
    for(int i = 0; i < n; i++)
    {
        count = 0;
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                count++;
            }
        }
        if(count == 1 && count < 2 && a[i] == x)
        {
            cout << a[i] << " ";
        }
    }
    cout << endl;
}
void cau_c(int *a, int n)
{
    cout << "cau c: ";
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 != 0 && a[i] < 20)
        {
            cout << a[i] << " ";
        }
    }
    cout << endl;
}
void cau_d(int *a, int n)
{
    cout << "cau d: ";
    int max = a[0];
    for(int i = 1; i < n; i++)
    {
        if(a[i] > max)
            max = a[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(a[i] == max)
            cout << i;
    }
    cout << endl;
}

int main()
{
    int *a;
    int n;
    int x;
    cout << "nhap chieu dai mang: ";
    cin>> n;
    input(a,n);
    cau_a(a,n);
    cau_b(a,n,x);
    cau_c(a,n);
    cau_d(a,n);
    delete []a;
}
