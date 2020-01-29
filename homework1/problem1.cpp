#include <iostream>
using namespace std;

// vol_pyramid = A*h/3

int main() {
    double a,h;
    cout << "Enter the Area of the base: \n";
    cin >> a;
    cout << "Enter the height: \n";
    cin >> h;
    cout.precision(2);
    double vol = a*h/3;
    cout << "The Volume of the Pyramid with area "<<a<<" and height of "<<h<<" is "<<vol<<endl;
    return 0;
}
