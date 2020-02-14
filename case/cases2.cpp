#include <iostream>
using namespace std;

int main() {
    int year;
    cout<<"enter a year:"<<endl;
    cin>>year;
    switch(year) {
        case 2020:
            cout<<"somewords"<<endl;
            break;
        case 2019:
            cout<<"some other words"<<endl;
            break;
        default:
            cout<<"invalid year"<<endl;
    }
    return 0;
}
