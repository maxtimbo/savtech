#include <iostream>
using namespace std;
// use three conditional statements
// What are **CONDITIONAL STATEMENTS** ?
//
// Use one "if" one "else"
// Use "else if"
//
//
// One if statement, one else if statement
// don't use an "else"
// What is the output?

int main() {
    int number;
    cout<<"Enter a number:"<<endl;
    cin>>number;
    if (number > 0) {
        cout<< "\nThe number is positive"<<endl;
    } else if (number == 0) {
        cout << "\nThe number is 0"<<endl;
    } else {
        cout <<"\nThe number is negative"<<endl;
    }
    return 0;
}
