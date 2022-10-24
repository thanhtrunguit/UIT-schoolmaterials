#include <iostream>
using namespace std;

int main()
{
    string product_name;
    float price;
    float quantity;
    cout << "put in the product name: " ;
    getline(cin, product_name);
    cout << "put in the price: ";
    cin >> price;
    cout << "put in the quantity: ";
    cin >> quantity;

    cout << "total price: " << quantity*price << endl;
    cout << "tax: " << (quantity*price)*0.1 << endl;

}
