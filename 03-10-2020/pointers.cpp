#include <iostream>
#include <list>
using namespace std;

int main() {
    float x = 1.0;
    int y=2;
    float *x_pntr = &x;
    int *y_pntr = &y;

    cout<<"Variable     |       Values      |       Address     "<<endl
        <<"x                "<<x<<"                  "<<&x<<endl
        <<"x_pntr           "<<x_pntr<<"     "<<&x_pntr<<endl
        <<"y                "<<y<<"                  "<<&y<<endl
        <<"y_pntr           "<<y_pntr<<"     "<<&y_pntr<<endl;


    return 0;
}
