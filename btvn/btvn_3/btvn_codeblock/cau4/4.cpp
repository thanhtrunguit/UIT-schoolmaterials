#include <iostream>
#include  <cmath>
using namespace std;
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
int main() {
    int n;
    cout << "nhap n ";
    cin >> n;


    cout << cau_4(n);

}
