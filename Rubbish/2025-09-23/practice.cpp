#include <iostream>
#include <string>
using namespace std;

int main(){
    int count = 0;
    int value;

    cin >> value;

    while (value < 0 && count < 5) {
        cout << "Value must be non-neg;" << "enter value again" << endl;

        cin >> value;

        count++;
    }

    cout << count;

    
    return 0;
}