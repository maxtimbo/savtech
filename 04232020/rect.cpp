#include <iostream>
using namespace std;

class rectangle {
    public:
        double length;
        double height;
};

int main() {
    double area = 0;
    rectangle r1;
    rectangle r2;
    r1.length = 5;
    r1.height = 15;
    area = (r1.length)*(r1.height);
    cout<<"The area of r1 is "<<area<<endl;
    r2.length = 3;
    r2.height = 9;
    area = (r2.length)*(r2.height);
    cout<<"The area of r2 is "<<area<<endl;
    return 0;
}
