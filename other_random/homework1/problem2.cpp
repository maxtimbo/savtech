#include <iostream>
#include <cmath>
using namespace std;

// surface area and volume of sphere is defined:
// SA_Sphere = 4PIr^2
// VOL_sphere = (4/3)PIr^3
#define PI 3.141592

double sa_sphere(float r) {
    double sa;
    sa = 4*PI * pow(r, 2);
    return sa;
}

double vol_sphere(float r) {
    double vol;
    vol = 4/3 * PI * pow(r, 3);
    return vol;
}


int main() {
    string ball1, ball2;
    double ball1_r, ball2_r;
    cout << "Enter two types of spheres: "<<endl;
    getline (cin, ball1);
    cout << "You wrote "<<ball1<<" as the first sphere \n";
    cout << "What is the other sphere: \n";
    getline (cin, ball2);
    cout << "You wrote "<<ball2<< "as the second sphere \n";
    cout << "enter the radius of "<<ball1<<"? \n";
    cin >> ball1_r;
    cout << "enter the radius of "<<ball2<<"? \n";
    cin >> ball2_r;
    cout << "The surface area of "<<ball1<<" is "<<sa_sphere(ball1_r)<<endl;
    cout << "The surface area of "<<ball2<<" is "<<sa_sphere(ball2_r)<<endl;
    cout << "The volume of "<<ball1<<" is "<<vol_sphere(ball1_r)<<endl;
    cout << "The volume of "<<ball2<<" is "<<vol_sphere(ball2_r)<<endl;
    return 0; 
}
