#include <iostream>
using namespace std;

int main(){
    int totalSeconds;
    int hours;
    int minutes;
    int seconds;

    std::cin >> totalSeconds;

    hours = totalSeconds / 3600;
    totalSeconds = totalSeconds % 3600;

    minutes = totalSeconds / 60;
    totalSeconds = totalSeconds % 60;

    seconds = totalSeconds;

    cout << "Hours: " << hours << endl;
    cout << "Minutes: " << minutes << endl;
    cout << "Seconds: " << seconds << endl;

    cout << hours << ":" << minutes << ":" << seconds;

    return 0;
}