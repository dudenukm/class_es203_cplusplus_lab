#include <iostream>
#include <cmath>
using namespace std;

const double pi = 3.14159;

double AREA(double r) {
    return pi*r*r;
}

double AREA(double l, double b) {
    return l*b;
}

double AREA(double a, double b, double c) {
    double s = (a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

int main() {

    double length, breadth, height, radius;
    
    cout << "Enter length : ";
    cin >> length;
    cout << "Enter breadth : ";
    cin >> breadth;
    cout << "Enter height : ";
    cin >> height;
    cout << "Enter radius : ";
    cin >> radius;

    cout << "Area of circle = " << AREA(radius) << endl;
    cout << "Area of rectangle = " << AREA(length, breadth) << endl;
    cout << "Area of triangle = " << AREA(length, breadth, height) << endl;
}