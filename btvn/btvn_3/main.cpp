#include <iostream>
#include  <cmath>
using namespace std;
/* int cau_1(int n) //tinh n!
    {
        int s = 1;
        for(int i = 1; i<=n; i++)
        {
            s = s*i;
        }
        return s;

    }
*/
/*
int cau_2(int n)
{
    int x;
    cout << "nhap x ";
    cin >> x;
    int s =1;
    for(int i = 1; i <= n; i++)
    {
        s = s*x;
    }
    return s;

}
 */

/*
int cau_3(int n)
{
    int s = 1;
    if(n %2 == 0)
    {
        for(int i =2; i<=n; i = i+2)
        {
            s = s*i;
        }
        return s;
    }
    if(n %2 != 0)
    {
        for(int i =1; i<=n; i = i+2)
        {
            s = s*i;
        }
        return s;
    }
}
*/
/*
int cau_4(int n)
{
    int a;
    int s = 0;
    while(n>0)
    {
        a = n%10;
        n = n/10;
        s = a + s*10;
    }
    return s;
}
 */
/*
int cau_1(int n)
{
    if(n < 10) {
        return n;
    }
    else {
        return n%10 + cau_1(n/10);
    }
}
int cau_2(int n)
{
    if(n<10)
        return 1;
    else
        return 1 + cau_2(n/10);
}
int cau_3(int x, int y)
{
    if(y==0)
        return 1;
    else
        return x* cau_3(x, y-1);
}
long double cau_4(int n)
{
    if(n == 1)
        return 1;
    else
        return n*cau_4(n-1);
}
*/
/*
int fib(int n)
{
    if(n == 1)
        return 0;
    else if(n == 2)
        return 1;
    else
        return fib(n-1) + fib(n-2);

}
*/
/*
int padovan(int n)
{
    if (n==1 || n == 2 || n == 3)
        return 1;
    else
        return padovan(n-2) + padovan(n-3);
}

*/
/*
int tinh(int n )
{
    int s = 0;
    int p = 1;
    for(int i = 1; i<=n; i +=1)
    {
        p = p * i;
        s = s+p;
    }
    return s;
}
*/
int giai_thua(int n )
{

    if(n == 1)
        return 1;
    else
        return n* giai_thua(n-1);
}
int tong(int n)
{
    if(n == 1)
        return 1;
    else
        return giai_thua(n) + tong(n-1);
}




int main() {
    int n,x,y;
    int N;
    //int a;
    /*
    do {
        cout << "nhap n ";
        cin >> n;
    }
    while(n<0);
    cout << tong(n);
     */
    /*
     cout << N/b;
    //cout << "nhap x, y";
    //cin >> x;   // square
    //cin >> y;   // square
    //cin >> N;   // giai thua
    //cin >> a;   // fibonaci sequence
    //cout << cau_1(n);
    //cout << cau_2(n);
    //cout << cau_3(n);
    //cout << cau_4(n);
    //cout << cau_1(n) << endl;
    //cout << cau_2(n) << endl;
    //cout << cau_3(x, y) << endl;
    //cout << cau_4(N);
    //cout << fib(a) << endl;
    //cout << padovan(a);
    //cout << tinh(n);

    /*
    int a = 9;
    unsigned int b = -9;
    long int  c = 9e10;
    short int d = 9;
    int key[3] = {1, 2, 3};
    string ho_va_ten = "trung";
    char tuoi[7] = {'m', 'u', 'o', 'i', 't', 'a', 'm'};
    char ten = 'a';

    cout << key[2] << endl;
    cout << a << endl << ten << endl;
    cout << b << endl <<  c << endl << d << endl;
    cout << ho_va_ten << " " << tuoi[2];
    */

    /*int s = 0;
    int p = 0;
    int a;
    while(n>0)
    {
        a= n%10;
        n = n/10;
        if (a%2==0)
        {
            s++;
        }
        if(a%2!=0)
        {
            p++;
        }
    }
    cout << "so so chan la: " << s << endl << "so so le la: " << p;
*/

    /*
    for(n; n<=10; n++)
    {
        for(int i =1; i<=10; i++)
        {
            cout << n<< "*"<< i<< "="<<  n*i << endl;
        }
    }
    */
    /*
    int i =1 ;
    int s = 0;
    int b;
    while(s + i <=20)
    {
        b = s;
        s = s + i;
        i = b;

        cout << s << endl;
    }
     */

}
