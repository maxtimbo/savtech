#include <iostream>
using namespace std;

//Write a function called getarray
//print array
//sum (to add the elements in your array)

const int size = 100; //Define constant int size for the size of the array

//Declare functions, we will define them later.
void getArray(double[], int&);
void printArray(double[], int);
double sumArray(double[], int);

int main() {
    double moon[size];
    int n;
    getArray(moon, n);
    cout<<"The array has "<<n<<" objects"<<endl;
    printArray(moon, n);
    cout<<"The sum of all the objects is "<<sumArray(moon, n)<<endl;

    return 0;
}

//Here we define the functions.
//First we are defining getArray to get the Array from the user
void getArray(double get_array[], int& iterator) {
    cout<<"Enter numbers"<<endl;
    for(iterator = 0; iterator < size; iterator++) {
        cout<<iterator<<" : ";
        cin>>get_array[iterator];
        if(get_array[iterator]==0) break;
    }
}

//Now we print the array
void printArray(double array_print[], int size_of_array) {
    for(int i = 0; i < size_of_array; i++) {
        cout<<'\t'<<i<<" : "<<array_print[i]<<endl;
    }
}

//Now we are getting the sum of the array and returning
//it as a double datatype
double sumArray(double sum_array[], int size_array) {
    double sum = 0;
    for(int i = 0; i < size_array; i++) {
        sum += sum_array[i];
    }
    return sum;    
}

