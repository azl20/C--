#include <iostream>
using namespace std;

int main() {
    const double TAX_RATE = 8.25 / 100;
    
    double price1, price2, price3;
    int qty1, qty2, qty3;

    double subtotal;
    double tax;
    double total;
    

    cout << "Input: ";
    std:cin >> price1 >> qty1 >> price2 >> qty2 >> price3 >> qty3;
    
    subtotal = price1 + price2 + price3;
    tax = subtotal * TAX_RATE;
    total = tax + subtotal;

    cout << "Output: " << endl;
    cout << "Subtotal: " << subtotal << endl;
    cout << "Tax: " << tax << endl;
    cout << "Total: " << total << endl;

    return 0;
}