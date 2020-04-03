#include <iostream>
using namespace std;

int main() {
    double moon[] = {88.7, 33.2, 89.2, 21.3};
    double sun[10] = {1.2, 4.6, 12.43, 12.54, 54.5, 65.3};
    int size_of_array = *(&moon + 1) - moon;
    cout<<"moon array has "<<size_of_array<<" objects"<<endl;

    for (int i=0; i<size_of_array; i++) {
        cout<<"sun["<<i + 1<<"] = "<<sun[i]<<endl
            <<"moon["<<i + 1<<"] = "<<moon[i]<<endl;
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

