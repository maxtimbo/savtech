#include <iostream>
#include <cmath>
using namespace std;

//Define constants
#define PI 3.141592

int main() {
    double x,y;
    cout << "Please enter a number to find the Square Root: ";
    cin >> x;
    y = sqrt(x);
    cout.setf(ios::showpoint | ios::fixed);
    cout.precision(5);
    cout << "The square root of "<<x<<"="<<y<<endl;
    cout << "Enter the radius of a circle: ";
    float r;
    cin >> r;
    double area = PI*pow(r, 2);
    cout.precision(20);
    cout << "The area of the circle with the radius "<<r<<" is "<<area<<endl;
    //cout << "Okay, let's do a list of numbers\nPlease enter a number: ";
    //double z[];

    
//    float rt, r1, r2;
//    cout << "Please enter the value of r1: \n";
//    cin >> r1;
//    cout << "Please enter the value of r2: \n";
//    cin >> r2;
//    rt = r1 + r2;
//    cout << "The value is: " << rt << " Ω" << endl;
    return 0;
}

