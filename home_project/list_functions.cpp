#include <iostream>
using namespace std;

bool ask_again(char reply) {
    bool y_n;
    if (reply == 'y' || reply == 'Y') {
        y_n = true;
    } else if (reply == 'n' || reply == 'N') {
        y_n = false;
    }
    return y_n;
}

int main() {
    int x = 0;
    int empty, i;
    int list[x];
    char reply_;
    cout<<"Enter a number: "<<endl;
    cin>>empty;
    list[x] = empty;
    x++;
    cout<<"Would you like to enter another value? [y/n]"<<endl;
    cin>>reply_;
    ask_again(reply_);
    while (ask_again(reply_) == true) {
        cout<<"Enter a number: "<<endl;
        cin>>empty;
        list[x] = empty;
        x++;
        cout<<"Would you like to enter another value? [y/n]"<<endl;
        cin>>reply_;
        ask_again(reply_);
    }
    
    cout<<list<<endl;
    
    for (i = 0; i < x; ++i) {
        cout<<"list item "<<i<<" is : "<<list[i]<<endl;
    }

    return 0;
}
