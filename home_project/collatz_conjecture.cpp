#include <iostream>
using namespace std;

bool is_valid(int n) {
    bool y_n;
    if (n <= 0) {
        y_n = false;
        int n;
        //cin.clear();
    } else {
        y_n = true;
    }
    return y_n;
}

int collatz_conjecture(int n) {
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
    return n;
}


int main() {
    long long int n;
    cout<<"Enter a positive number: "<<endl;
    cin>>n;
    while (is_valid(n) == false) {
        cout<<"Please enter a valid number: "<<endl;
        cin>>n;
    }

    collatz_conjecture(n);
    
    return 0;
}

