#include <iostream>
using namespace std;

int main() {
    int i;
    int time_now = clock();
    time_t now;

    for (i=10; i>=0; --i) {
        system("sleep 1");
        cout<<"i= "<<i<<endl;
        cout<<now<<endl;
    }
    return 0;
}
