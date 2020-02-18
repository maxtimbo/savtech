#include <iostream>
using namespace std;

bool is_valid(int num) {
    bool a;
    if (num > 0 && num < 100) {
        a = true;
    } else {
        a = false;
    }
    return a;
}

int digit_test(int number) {
    if (number >= 1 && number <= 9) {
        cout<<"The number you entered, "<<number<<", has only one digit."<<endl;
    } else if (number >= 10 && number <= 99) {
        cout<<"The number you entered, "<<number<<", has two digits."<<endl;
    }
    return 0;
}

int main() {
    int use_num;
    cout<<"Please enter a number between 1 & 100"<<endl;
    cin>>use_num;
    while (is_valid(use_num) == false) {
        cout<<"The number you have enter is not valid. Please try again"<<endl;
        cin>>use_num;
    }
    digit_test(use_num);
    return 0;
}

