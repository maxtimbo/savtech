#include <iostream>
using namespace std;

int main() {
    double moon[] = {88.7, 33.2, 89.2, 21.3};
    double sun[10] = {1.2, 4.6, 12.43, 12.54, 54.5, 65.3};
    int size = *(&moon + 1) - moon;
    cout<<"moon array has "<<size<<" objects"<<endl;

    for (int i=0; i<4; i++) {
        cout << "sun["<<i<<"]= "<<sun[i]<<endl;
    }

    int count = 0;

    for (int b = 0; b < 10; b++) {
        if (sun[b] != '\0') {
            count = count + 1;
        }
    }
    cout <<count<<endl;

    return 0;
}

