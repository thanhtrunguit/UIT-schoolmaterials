#include <iostream>
#include  <cmath>
using namespace std;
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
int main() {
    int n;
    cout << "nhap n ";
    cin >> n;
    cout << cau_3(n);

}
