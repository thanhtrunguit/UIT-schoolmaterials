#include <iostream>
#include  <cmath>
using namespace std;
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

int main() {
    int n;
    cout << "nhap n ";
    cin >> n;

    cout << cau_2(n);

}
