
//5.Viết chương trình Nhập vào tháng và năm (năm> 1975), kiểm tra tính hợp lệ của tháng, năm và cho biết tháng đó có bao nhiêu ngày.
//
//Ví dụ : Nhập vào năm -1 , In ra năm không hợp lệ
//
//Ví dụ : Nhập vào tháng 15 , In ra tháng không hợp lệ
//
//Ví dụ : Nhập vào tháng 3, năm 2000 , In ra tháng có 31 ngày
//
//Ví dụ : Nhập vào tháng 4, năm 2001 , In ra tháng có 30 ngày
//
//Ví dụ : Nhập vào tháng 2, năm 2000 , In ra tháng có 29 ngày

#include <iostream>
using namespace std;

int main()
{
    int thang, nam;
    cout << "nhap thang ";
    cin >> thang;
    cout << "nhap nam ";
    cin >> nam;
    if(nam > 1975 && thang >= 1 && thang <= 12 )
    {
        if (nam % 4 == 0 && nam % 100 != 0 || nam % 400 == 0) // dk nam nhuan.
        {
            switch(thang)
            {
                case 1:
                case 2:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 11:
                cout << "thang co 31 ngay";
                break;
                default: cout << "thang co 30 ngay";

            }

        }
        else //nam khong nhuan
        {
            switch(thang)
            {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 11:
                cout << "thang co 31 ngay";
                break;
                default: cout << "thang co 30 ngay";

            }

        }
    }
    else
    {
        cout << "khong hop le";
    }
}


