#include <iostream>
using namespace std;

int main() {
    int cents;
    int dollars;
    int quarters;
    int dimes;
    int nickels;
    int pennies;

    std::cin >> cents;

    dollars = cents / 100;
    cents = cents % 100;

    quarters = cents / 25;
    cents = cents % 25;


}