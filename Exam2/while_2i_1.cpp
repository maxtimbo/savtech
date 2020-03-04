#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while (i < 10) {
        int x = 2 * i + 1;
        cout<<"i = "<<i<<endl
            <<"x = "<<x<<endl<<endl;
        ++i;
    }
    return 0;
}
