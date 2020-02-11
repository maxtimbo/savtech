#include <iostream>
using namespace std;

int main() {
    int number;
    cout<<"Please enter a number"<<endl;
    cin>>number;
    if (number > 0) {
        cout<<"number is positive"<<endl;
        if (number >= 1 && number <= 20) {
            cout<<"Cool man, I like that number, it is between 1 & 20"<<endl;
        } 
    } else {
        cout<<"The number is negative"<<endl;
    }
    return 0;
}
