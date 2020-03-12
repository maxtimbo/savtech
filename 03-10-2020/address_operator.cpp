#include <iostream>
#include <list>
using namespace std;

int main() {
    float x = 1.0, y=2.0;
    int i=2,j=4;
    double q=0.5, r=0.748995;
    
    cout<<"The Address for "<<x<<" is "<<&x<<" size in bytes = "<<sizeof(x)<<endl
        <<"The Address for "<<y<<" is "<<&y<<" size in bytes = "<<sizeof(y)<<endl
        <<"The Address for "<<i<<" is "<<&i<<" size in bytes = "<<sizeof(i)<<endl
        <<"The Address for "<<j<<" is "<<&j<<" size in bytes = "<<sizeof(j)<<endl
        <<"The Address for "<<q<<" is "<<&q<<" size in bytes = "<<sizeof(q)<<endl
        <<"The Address for "<<r<<" is "<<&r<<" size in bytes = "<<sizeof(r)<<endl;

    return 0;
}
