#include <iostream>
using namespace std;

void read_(int arr[3][6]);
void display_(int arr[3][6]);

int main() {
    int moon[3][6];
    read_(moon);
    display_(moon);
    return 0;
}

void read_(int arr[3][6]) {
    int x, y;
    for(x = 0; x < 3; x++) {
        for(y = 0; y < 6; y++) {
            cout<<"Assign an integer for array index ["<<x<<"]["<<y<<"]\t";
            cin>>arr[x][y];
        }
    }
}

void display_(int arr[3][6]) {
    int x, y;
    for(x = 0; x < 3; x++) {
        for(y = 0; y < 6; y++) {
            cout<<"The element at array index ["<<x<<"]["<<y<<"] is "
                <<arr[x][y]<<endl;
        }
    }
}
