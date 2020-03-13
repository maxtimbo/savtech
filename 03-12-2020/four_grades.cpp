#include <iostream>
using namespace std;

int main() {
    float grades[4];  //declare grades array (list)
    float sum, ave;  //declare sum and average floats
    int i;  //declare i for loops
    
    for (i = 0; i < 4; ++i) {
        cout<<"Enter grade for "<< i+1<<endl;
        cin>>grades[i];
    }

    sum = 0.0;
    for (i = 0; i < 4; ++i) {
        sum = sum + grades[i];
    }
    
    float *p;
    p = grades;

    for (int x = 0; x < 4; x++) {
        cout<<*p<<endl;
        cout<<p<<endl;
        p++;
    }
    
    ave = sum/4;
    cout<<"Sum of grades = "<<sum<<endl;
    cout<<"Average of grades = "<<ave<<endl;

    return 0;
}
