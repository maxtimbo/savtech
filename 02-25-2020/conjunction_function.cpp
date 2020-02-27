#include <iostream>
using namespace std;

int add(int num1, int num2) {
    int sum = num1 + num2;
    return sum;
}

int subtract(int num1, int num2) {
    int difference = num1 - num2;
    return difference;
}

int multi(int num1, int num2) {
    int product = num1 * num2;
    return product;
}

/*
int main() {
    int sum, limit;
    cout<<"Enter a number: "<<endl;
    cin>>limit;
    for (int i = 1; i <= limit; ++i) {
       sum += i;
    }
   cout<<sum<<endl; 
    return 0;
}
*/

int main(int argc, char *argv[]) {
    cout<<argv[1]<<endl;
    if (argv[1] == 1) {
        cout<<"return true"<<endl;
    } else {
        cout<<"return false"<<endl;
    }
    return 0;
//dot operator, pointers...
}

