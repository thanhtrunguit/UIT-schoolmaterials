
#include <iostream>
#include  <cmath>
using namespace std;
int main()
 {
    int n;
    cout << "nhap n ";
    cin >> n;

    //cout << cau_1(n);
    //cout << cau_2(n);
    //cout << cau_3(n);
    //cout << cau_4(n);
    int s = 0;
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
    cout << "so so chan la: " <<  s << endl  << "so so le la: " << p;
}
