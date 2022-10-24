#include <iostream>
using namespace std;

int main()
{
    float math;
    float physics;
    float chemistry;
    int a; // coefficient of math
    int b; // coefficient of physics
    int c; // coefficient of chemistry

    cout << "put in your math score: ";
    cin >> math;
    cout << "coefficient of math: ";
    cin >> a;
    cout << "put in your physics score: ";
    cin >> physics;
    cout << "coefficient of physics: ";
    cin >> b;
    cout << "put in your chemistry score: ";
    cin >> chemistry;
    cout << "coefficient of chemistry: ";
    cin >> c;

    cout << "average point: " << (math*a + physics*b + chemistry*c)/(a+b+c);


}
