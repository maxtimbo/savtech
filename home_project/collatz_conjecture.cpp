#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a positive number: "<<endl;
    cin>>n;
    bool valid_number;
    
    if (n < 0) {
        valid_number = false;
    } else { 
        valid_number = true;
    }

    while (valid_number == false) {
        cout<<"Please enter a positive number: "<<endl;
        cin>>n;
        if (n < 0) {
            valid_number = false;
        } else {
            valid_number = true;
        }
    }
    
    int step_count = 0;

    while (n != 1) {
        int x = n % 2;
        if (x == 0) {
            n = (n / 2);
            cout<<n<<endl;
        } else {
            n = (3 * n) + 1;
            cout<<n<<endl;
        }
        ++step_count;
    }
    
    cout<<"The conjecture took "<<step_count<<" steps"<<endl;
    
    return 0;
}

