#include <iostream>
#include <string>
#include <stdlib>
#include <time>
using namespace std;

bool y_n(char q);
float man_bills();
float auto_bills();

int main() {
    // Declare arrays. The first is for printing month names.
    string month[12] = {"January", 
        "February", 
        "March", 
        "April", 
        "May", 
        "June", 
        "July", 
        "August", 
        "September", 
        "October", 
        "November", 
        "December"};
    float phoneBill[12]; // For storing the values of each month.
    float sum, ave;  //Declare sum and average 
    int i; // declare i for loops
    int pointer_select;
    char q;
    string* m = month;
    float* pb = phoneBill;


    ave = sum/12; // get average
    cout<<"Total yearly phone bill = "<<sum<<endl
        <<"Average monthly phone bill = "<<ave<<endl
        <<"View pointer information? [y/n]"<<endl;
    cin>>q;
    //y_n(q);
    while (y_n(q) == true) {
        cout<<"Select month: "<<endl;
        for (i = 0; i < 12; ++i) {
            cout<<i + 1<<". "<<month[i]<<endl;
        }
        cin>>pointer_select;
        
    }
    return 0;
}

bool y_n(char q) {
    bool ans;
    if (q != 'y' || q != 'n') {
        cout<<"Please enter y or n"<<endl;
        cin>>q;
    } else if (q == 'y') {
         ans = true;
    } else if (q == 'n') {
         ans = false;
    }
    return ans;
}

float man_bills() {
    float ave;
    for (i = 0; i < 12; ++i) {
        cout<<"Enter the phone bill for "<<month[i]<<": $"; 
        cin>>phoneBill[i];  //get value
        sum = sum + phoneBill[i];  // add to sum
    }
    ave = sum/12;
    return ave;
}

float auto_bills() {
    float ave, amt;
    srand(time(0));
    for (i = 0; i < 12; ++i) {
        amt = 
