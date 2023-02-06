#include <iostream>
using namespace std;
void input(char a[])
{
    gets(a);
}
void cau_a(char a[])
{
    cout << "cau a: ";
    for(int i = 0; i < strlen(a); i++)
    {
        if(a[i] >= 'A' && a[i] <= 'Z')
            cout << a[i] << " " ;
    }
    cout << endl;
}
void cau_b(char a[])
{
    cout << "cau b: ";
    for(int i =0 ; i < strlen(a); i++)
    {
        if(a[i] >= 'a' % a[i] <='z')
        {s
            if(i %2 !=0)
            {
                cout << a[i];
            }
        }
    }
    cout << endl;
}
void cau_c(char a[])
{
    cout << "cau c: ";
    char replace_cau_c[100];
    int count;
    strcpy(replace_cau_c, a);
    for(int i =0; i < strlen(a); i++){
        count = 0;
        for(int j = i + 1; j < strlen(a); j++)
        {
            if(replace_cau_c[i] == replace_cau_c[j])
            {
                count++;
                replace_cau_c[j] = ' ';
            }
        }
        if(count == 0)
        {
            if(a[i] >='A' && a[i] <='Z')
                cout << a[i] << " ";
        }
    }
    cout << endl;
}
void cau_d(char a[])
{
    cout << "cau d: ";
    for(int i = 0; i< strlen(a); i++)
    {
        if(a[i] == ' ')
            a[i] = a[i+1];
    }
    puts(a);
}
int main() {
    char a[1000];
    input(a);
    cau_a(a);
    cau_b(a);
    cau_c(a);
    cau_d(a);
}

