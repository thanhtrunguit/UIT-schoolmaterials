#include <iostream>
#include  <cmath>
using namespace std;
int a;
int cau_1(int n)
{
    int s = 1;
    for(int i = 1; i<=n; i++)
    {
        s = s*i;
    }
    return s;

}
int main() {
    int n;
    cin >> n;
    cout << cau_1(n);

}
