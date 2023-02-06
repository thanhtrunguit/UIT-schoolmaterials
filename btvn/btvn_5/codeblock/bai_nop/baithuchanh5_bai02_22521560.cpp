#include <iostream>
using namespace std;
// m,i la so hang, n,j la so cot
void nhap_mang(int a[][1000], int i, int j)
{
    for(int h = 0; h < i; h++)
    {
        for(int c = 0; c < j; c++)
        {
            cout << "nhap A[" << h << "]" << "[" << c << "]";
            cin >> a[h][c];
        }
    }
}
void phan_tu_MAX(int a[][1000], int i, int j)
{
    int max = a[0][0];
    for(int h = 0; h < i; h++)
    {
        for(int c = 0; c < j; c++)
        {
            if(a[h][c] > max)
                max = a[h][c];
        }
    }
    cout << "phan tu co gia tri lon nhat trong mang la: "<< max << endl;

}
void phan_tu_nua_tren_dcheo_chinh(int a[][1000], int i, int j)
{
    cout << "cac phan tu nua tren duong cheo chinh la: ";
    for(int h = 0; h < i; h++)
    {
        for(int c = 0; c < j;c++)
        {
            if(c >= h)
            cout << a[h][c] << " ";
        }
    }
    cout << endl;
}
void phan_tu_MAX_tren_tung_hang(int a[][1000], int i, int j)
{
    for(int h = 0; h < i; h++)
    {
        int max = a[h][0];
        for(int c = 0; c < j; c++)
        {
            if(a[h][c] > max)
                max = a[h][c];
        }
        cout << "phan tu max tren hang " << h << " la " << max << endl;
    }

}
void phan_tu_MAX_tren_tung_cot(int a[][1000], int i, int j)
{
    for(int c = 0; c < j; c++)
    {
        int max = a[0][c];
        for(int h = 0; h < i; h++)
        {
            if(a[h][c] > max)
                max = a[h][c];
        }
        cout << "phan tu max tren cot "<< c << " la " << max << endl;
    }

}
void cac_so_nguyen_to_trong_mang(int a[][1000], int i, int j)
{
    int tam = 0;
    cout << "so nguyen to trong mang la:" << endl;
    for(int h = 0; h < i; h++)
    {
        for(int c = 0; c < j; c++)
        {
            for(int k = 1; k <= a[h][c]; k++)
            {
                if(a[h][c] % k == 0)
                    tam++;
            }
            if(tam == 2)
                cout << a[h][c] << " ";
            tam = 0;
        }
    }
}
int main() {
    int i, j;
    int a[1000][1000];
    cout << "nhap so hang va so cot: ";
    cin >> i >> j;
    nhap_mang(a, i, j);
    phan_tu_MAX(a, i, j);
    phan_tu_nua_tren_dcheo_chinh(a, i, j);
    phan_tu_MAX_tren_tung_hang(a, i, j);
    phan_tu_MAX_tren_tung_cot(a, i, j);
    cac_so_nguyen_to_trong_mang(a, i, j);
    return 0;
}
