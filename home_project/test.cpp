#include <iostream>
using namespace std;

int main() {
    int x;
    cout<<"Enter a number: "<<endl;
    cin>>x;
    if (x > 10 ^ x > 15) {
        cout<<"The statement is true"<<endl;
    } else {
        cout<<"The statement is false"<<endl;
    }
    return 0;
}
