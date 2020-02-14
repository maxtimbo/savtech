#include <iostream>
using namespace std;

int main() {
    int i;
    for (i=1; i<=3; ++i) {
        cout<<"i= "<<i<<endl;
        system("sleep 1");
    }
    int v;
    cout<<"Enter a number"<<endl;
    cin>>v;
    (v>=20) ? cout<<"somestring"<<endl : cout<<"else"<<endl;
    return 0;
}
