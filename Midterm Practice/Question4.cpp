#include <iostream>
using namespace std;

int main(){
    int number;
    int tries = 0;
    cin >> number;
    while (number < 1 || number > 10)
    {
        cout << "Enter a number between 1 and 10: ";
        cin >> number;
        tries++;
    }
    cout << tries;   
    return 0;
}