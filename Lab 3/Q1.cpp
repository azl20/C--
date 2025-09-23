#include <iostream>
using namespace std;

int main(){
    const double PI = 3.141592653589793;

    double width;
    double height;
    double radius;
    double rectArea;
    double rectPerimeter;
    double circleArea;
    double circleCircumference;

    std:cin >> width >> height >> radius;

    rectArea = width * height;
    rectPerimeter = (2 * width) + (2 * height);
    circleArea = PI * (radius * radius);
    circleCircumference = 2 * PI * radius;

    cout << "RectArea:" << rectArea << endl << "RectPerimeter:" << rectPerimeter << endl << "CircleArea:" << circleArea << endl << "CircleCircumfurence:" << circleCircumference << endl;

    return 0;
}