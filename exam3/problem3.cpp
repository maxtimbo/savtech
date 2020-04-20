#include <iostream>
using namespace std;

void Repeat(int arr[], int size, int test_num);
bool y_n(char ans);
void enterContinue();

int main() {
    int moon[] = {1, 2, 3, 2, 1, 4, 3, 4, 2, 3, 1, 5};
    int arrsize = sizeof(moon)/sizeof(moon[0]);
    char q_ans = 'y';
    int current_test;
    while(y_n(q_ans) == true) {
        cout<<"Select a number... "<<endl;
        cin>>current_test;
        Repeat(moon, arrsize, current_test);
        cout<<"Test a different number? [y/n]"<<endl;
        cin>>q_ans;
    }
    return 0;
}

void Repeat(int arr[], int size, int test_num) {
    int x, l = 0;
    for(x = 0; x < size; x++) {
        if(arr[x] == test_num){
            l += 1;
        }
    }
    if(l > 0) {
        if(l == 1) {
            cout<<"\nThe number "<<test_num<<" is in the array only once."
                <<endl;
        } else if(l == 2) {
            cout<<"\nThe number "<<test_num
                <<" appears in the array twice."
                <<endl;
        } else if(l >= 3) {
            cout<<"\nThe number "<<test_num<<" is duplicated "<<l<<" times."
                <<endl;
        }
    } else {
        cout<<"\nThe number "<<test_num<<" is not present in the array."<<endl;
    }
    enterContinue();
}

// Helper functions
void enterContinue() {
    cout<<"Press ENTER to continue... "<<endl;
    cin.ignore();
    cin.get();
}

bool y_n(char ans) {
    bool w;
    if(ans == 'y') {
        w = true;
    } else if(ans == 'n') {
        w = false;
    }
    return w;
}
