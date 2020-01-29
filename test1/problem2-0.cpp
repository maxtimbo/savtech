#include <iostream>
#include <cmath>
using namespace std;

#define mult_const 4.828

int main() {
    double a; //Define datatype and declare variable "a"
    cout << "Length: \n"; //print "Length: " and newline
    cin >> a; //Ask user to define "a"
    double area_oct = mult_const * pow(a, 2); //Define datatype double for variable area_oct and do math
    cout <<"the area of the octogon wwith the length of "<<a<<" is "<< area_oct<<endl; //Print the output of the math
    return 0;
}
