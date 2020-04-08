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
    double a[size];
    int n;
    getArray(a, n);
    cout<<"The array has "<<n<<" objects"<<endl;
    printArray(a, n);
    cout<<"The sum of all the objects is "<<sumArray(a, n)<<endl;

    return 0;
}

void getArray(double a[], int& n) {
    cout<<"Enter numbers"<<endl;
    for(n = 0; n < size; n++) {
        cout<<n<<" : ";
        cin>>a[n];
        if(a[n]==0) break;
    }
}

void printArray(const double a[], const int n) {
    for(int i = 0; i < n; i++) {
        cout<<'\t'<<i<<" : "<<a[i]<<endl;
    }
}

double sumArray(const double a[], const int n) {
    double sum = 0;
    for(int j = 0; j < n; j++) {
        sum += a[j];
    }
    return sum;    
}

