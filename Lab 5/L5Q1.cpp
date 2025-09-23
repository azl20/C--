#include <iostream>
#include <fstream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    double sales;
    double total_sales = 0.0;
    double min_sales = numeric_limits<double>::max();
    double max_sales = numeric_limits<double>::min();
    int days_count = 0;
    
    do {
        cout << "Enter day's sales (or -1 to exit): $";
        cin >> sales;
        
        if (sales == -1) {
            break;
        }
        
        if (sales < 0) {
            cout << "Please enter a non-negative value (or -1 to exit)." << endl;
            continue;
        }
        
        // Valid sales entry
        days_count++;
        total_sales += sales;
        
        // Track min and max
        if (sales < min_sales) {
            min_sales = sales;
        }
        if (sales > max_sales) {
            max_sales = sales;
        }
        
    } while (true);
    
    // Display results
    cout << "\n--- Sales Report ---" << endl;
    
    if (days_count == 0) {
        cout << "No valid sales data entered." << endl;
        return 0;
    }
    
    double average = total_sales / days_count;
    
    cout << fixed << setprecision(2);
    cout << "Days recorded : " << days_count << endl;
    cout << "Total sales   : $" << total_sales << endl;
    cout << "Average/day   : $" << average << endl;
    cout << "Lowest day    : $" << min_sales << endl;
    cout << "Highest day   : $" << max_sales << endl;
    
    // Save to file
    ofstream outFile("sales_report.txt");
    if (outFile.is_open()) {
        outFile << "--- Sales Report ---" << endl;
        outFile << fixed << setprecision(2);
        outFile << "Days recorded : " << days_count << endl;
        outFile << "Total sales   : $" << total_sales << endl;
        outFile << "Average/day   : $" << average << endl;
        outFile << "Lowest day    : $" << min_sales << endl;
        outFile << "Highest day   : $" << max_sales << endl;
        outFile.close();
        cout << "\nReport saved to sales_report.txt" << endl;
    }
    
    return 0;
}
