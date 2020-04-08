#include <iostream>
using namespace std;

//Write a function called getarray
//print array
//sum (to add the elements in your array)
//

const int size = 100;

void getArray(double[], int&);
void printArray(const double[], const int);
double sumArray(const double[], const int);

int main() {
    double moon[size];
    int n;
    getArray(moon, n);
    cout<<"The array has "<<n<<" objects"<<endl;
    printArray(moon, n);
    cout<<"The sum of all the objects is "<<sumArray(moon, n)<<endl;

    return 0;
}

void getArray(double moon[], int& n) {
    cout<<"Enter numbers"<<endl;
    for(n = 0; n < size; n++) {
        cout<<n<<" : ";
        cin>>moon[n];
        if(moon[n]==0) break;
    }
}

void printArray(const double moon[], const int n) {
    for(int i = 0; i < n; i++) {
        cout<<'\t'<<i<<" : "<<moon[i]<<endl;
    }
}

double sumArray(const double moon[], const int n) {
    double sum = 0;
    for(int j = 0; j < n; j++) {
        sum += moon[j];
    }
    return sum;    
}

