#include <iostream>
using namespace std;

int main() {
    int array2d[2][3];


    for(int k = 0; k < 2; k++) {
        for(int l = 0; l < 3; l++) {
            cout<<"values["<<k<<"]["<<l<<"] : ";
            cin>>array2d[k][l];
        }
    }

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout<<"values["<<i<<"]["<<j<<"] : "<<array2d[i][j]<<endl;
        }
    }
    return 0;
}
