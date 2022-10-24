#include <iostream>
using namespace std;

int main()
{
    float radius;
    float pi;
    pi = 3.14;

    cout << "put in the radius: ";
    cin >> radius;
    cout << "the area of the circle is: " << radius*radius*pi << endl;
    cout << "the perimeter of the circle is: " << 2*radius*pi;
}
