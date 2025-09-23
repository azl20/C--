#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    const int UPPER_BOUND = 12;
    bool exceeded_90 = false;
    
    // Optional: Open file for output
    ofstream outFile("table.txt");
    
    for (int a = 1; a <= UPPER_BOUND; a++) {
        for (int b = 1; b <= UPPER_BOUND; b++) {
            int product = a * b;
            
            // Check if product exceeds 90
            if (product > 90) {
                cout << "\nProgram ended because product exceeded 90." << endl;
                if (outFile.is_open()) {
                    outFile << "\nProgram ended because product exceeded 90." << endl;
                }
                exceeded_90 = true;
                break;
            }
            
            // Skip products divisible by 5 or 7
            if (product % 5 == 0 || product % 7 == 0) {
                continue;
            }
            
            // Print the multiplication
            cout << setw(2) << a << " x " << setw(2) << b << " = " << setw(3) << product << endl;
            
            // Also write to file if open
            if (outFile.is_open()) {
                outFile << setw(2) << a << " x " << setw(2) << b << " = " << setw(3) << product << endl;
            }
        }
        
        if (exceeded_90) {
            break;
        }
        
        // Print newline after each row
        cout << endl;
        if (outFile.is_open()) {
            outFile << endl;
        }
    }
    
    if (outFile.is_open()) {
        outFile.close();
        cout << "Table saved to table.txt" << endl;
    }
    
    return 0;
}