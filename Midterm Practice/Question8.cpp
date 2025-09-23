/* Write a small C++ program that asks the user for their last name and then outputs:

Hello <last name>!
Glad to have you in Programming 101.

For example, if user enters Johnson, the output should be:

Hello Johnson!
Glad to have you in Programming 101. */

#include <iostream>
using namespace std;

int main(){
    string lastName;
    cout << "What's your last name?: ";
    cin >> lastName;
    cout << "Hello " << lastName << "!" << endl;
    cout << "Glad to have you in Programming 101." << endl;
    
    return 0;
}