#include <iostream>
#include <string>
using namespace std;
void nhap_string(char a[1000])
{
    cout << "nhap chuoi ky tu:";
    gets(a);
}
/*
void xuat_string(char a[1000])
{
    puts(a);
}
 */
void xuat_cac_ki_tu_thuong(char a[1000])
{
    for(int i = 0; i < strlen(a); i++)
    {
        if(a[i] <= 'z' && a[i] >= 'a')
        {
            cout << a[i] << " ";
        }
    }
    cout << endl;
}
void xuat_chuoi_dao_nguoc(char a[1000])
{
    char b;
    char replace_1[1000];
    strcpy(replace_1, a);// tao ban sao copy chuoi a[10000] =>> tranh anh huong toi chuoi goc.
    int tmp = strlen(replace_1);
    for(int i = 0; i < tmp; i++)
    {
        b = replace_1[i];
        replace_1[i] = replace_1[tmp - 1];
        replace_1[tmp - 1] = b;
        tmp = tmp-1;
    }
    for(int i = 0; i < strlen(replace_1); i++)
    {
        cout << replace_1[i];
    }
    cout << endl;
}
void ki_tu_chan_le_xen_ke(char a[1000])
{
    char replace_2[1000];
    strcpy(replace_2, a);
    for(int i = 0; i < strlen(replace_2); i++)
    {
        if(i % 2 == 0 || i == 0)
        {
            replace_2[i] = toupper(replace_2[i]);
        }
        if(i % 2 != 0)
        {
            replace_2[i] = tolower(replace_2[i]);
        }
    }
    for(int i = 0; i < strlen(replace_2); i++)
    {
        cout << replace_2[i];
    }
    cout << endl;
}
void cac_ki_tu_xuat_hien_1_lan(char a[1000])
{
    int count = 0;
    int j;
    char replace_3[1000];
    strcpy(replace_3, a);
    for(int i = 0; i < strlen(a); i++)
    {
        count = 0;
        for(j = i +1 ; j < strlen(a); j++)
        {
            if(a[i] == a[j])
            {
                count++;
                a[j] = ' ';
                 // loai bỏ kí tự phía sau nếu đã tồn tại trước đó, tránh việc phải scan những kí tự đã tồn 1 lần.
            }
        }
            if(count == 0)
            {
                cout << a[i];
            }
    }


}
int main() {
    char a[1000];
    nhap_string(a);
    //xuat_string(a);
    xuat_cac_ki_tu_thuong(a);
    xuat_chuoi_dao_nguoc(a);
    ki_tu_chan_le_xen_ke(a);
    cac_ki_tu_xuat_hien_1_lan(a);
    return 0;
}
