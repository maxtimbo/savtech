#include <iostream>
using namespace std;


void getArray(double[], int&);
void printArray(double[], int&);
const int arraySize = 100;

int main() {
    double moon[arraySize];
    int i;
    getArray(moon, i);
    int sizeOfArray = *(&moon + 1) - moon;
    printArray(moon, i);
    return 0;
}

void getArray(double moon[], int& i) {
    for(i = 0; i<arraySize; i++) {
        cout<<i<<" : ";
        cin>>moon[i];
        if(moon[i]=='\0') break;
    }
}

void printArray(const double moon[], const int n) {
    cout<<"called printArray";
    for(int i = 0; i < n; i++) {
        cout<<"Array Index ["<<i<<"] = "<<moon[i]<<endl;
    }
}


