#include <iostream>
using namespace std;


int main() {

    enum level {
        exce = 1,
        good = 2,
        fair = 3,
        poor = 4};
    int choice;
    cout <<"choice: ";
    cin>>choice;
    switch(choice) {
        case exce:
            cout<<"excel selected"<<endl;
            break;
        case good:
            cout<<"good selected"<<endl;
            break;
        case fair:
            cout<<"fair selected"<<endl;
            break;
        case poor:
            cout<<"poor selected"<<endl;
            break;
        default:
            cout<<"invalid selection"<<endl;
            break;
    }
    return 0;
}
