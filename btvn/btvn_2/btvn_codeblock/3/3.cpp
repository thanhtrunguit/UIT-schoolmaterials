#include <iostream>
using namespace std;

int main()
{
    float a,b,c;
     cout << "nhap do dai cac canh ";
     cin >> a >> b >> c;

     if( (a+b)>c && (a+c)>b && (b+c)>a )
     {
         if( a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a ) //tam giac vuong
         {
             cout << "tam giac vuong";
         }

         else if ( a == b || a == c) //tam giac can hoac deu
         {
             if(a == b && a == c && b == c )
             {
                 cout << "tam giac deu";
             }
             else
             {
                 cout << "tam giac can";
             }
         }
         else
         {
             cout << "tam giac thuong";
         }

     }
     else
     {
         cout << "khong phai tam giac";
     }
}
