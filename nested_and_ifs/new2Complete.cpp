#include <iostream>
using namespace std;

int main() {
    int number;
    cout<<"Please enter a number between 1 and 4"<<endl;
    cin>>number;
    if (number==1) {
        cout<<"This must be your fist C++ Program."<<endl;
    } else if (number==2) {
        cout<<"You must be learning C++"<<endl;
    } else if (number==3) {
        cout<<"You got a B!"<<endl;
    } else if (number==4) {
        cout<<"You gott an A!!!"<<endl;
    } else {
        cout<<"Don't give up!!!"<<endl;
    }
    return 0;
}
