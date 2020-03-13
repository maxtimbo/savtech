#include <iostream>
#include <string>
using namespace std;

int main() {
    string month[12] = {"jan", "feb", "mar", "apr", "may", "jun", "jul", "aug", "sep", "oct", "nov", "dec"};
    float phoneBill[12];
    float sum, ave;
    int i;

    for (i = 0; i < 12; ++i) {
        cout<<"Enter the phone bill for "<<month[i]<<": $";
        cin>>phoneBill[i];
    }

    for (i = 0; i < 12; ++i) {
        sum = sum + phoneBill[i];
    }

    ave =  sum/12;
    cout<<"Total yearly phone bill = "<<sum<<endl;
    cout<<"Average monthly phone bill = "<<ave<<endl;

    return 0;
}
