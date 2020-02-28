#include <iostream>
using namespace std;

int switch_(char names, int num);
int test_selection(int sel);
int get_number();
int while_sum(int num);
int for_sum(int num);
int for_squares(int num);
int while_squares(int num);
bool is_valid(int sel);

int main(void) {
    int nu, selection;
    cout<<"Enter a number: "<<endl;
    cin>>nu;
    cout<<"Select a program: "<<endl<<endl
        <<"1. Run Sum of Numbers as for loop"<<endl
        <<"2. Run Sum of Numbers as while loop"<<endl
        <<"3. Run Sum of Squares as for loop"<<endl
        <<"4. Run Sum of Squares as while loop"<<endl<<endl
        <<"Selection: ";
    cin>>selection;
    while (is_valid(selection) == false) {
        cout<<"Please make a valid selection"<<endl;
        cin>>selection;
    }
    char final_ = test_selection(selection);
    switch_(final_, nu);
/*    int nu, total;
*    nu = get_number();
*    total = add_while(nu);
*    cout<<total<<endl;
*    cin>>nu;
*    cout<<add_while(nu)<<endl;
*/
}

bool is_valid(int sel) {
    bool y_n;
    if (sel > 0 && sel <= 4) {
        y_n = true;
    } else {
        y_n = false;
    }
    return y_n;
}

int test_selection(int sel) {
    char final_select;
    if (sel == 1) {
        final_select = "for_sum";
    } else if (sel == 2) {
        final_select = "while_sum";
    } else if (sel == 3) {
        final_select = "for_sum";
    } else if (sel == 4) {
        final_select = "while_sum";
    }
    return final_select;
}   

int switch_(char names, int num) {
    switch(names) {
        case "for_sum":
            cout<<for_sum(num)<<endl;
            break;
        case "while_sum":
            cout<<while_sum(num)<<endl;
            break;
        case "for_squares":
            break;
        case "while_squares":
            break;
        default:
            cout<<"Error, please select a valid entry"<<endl;
            break;
}

int get_number() {
    int n;
    cout<<"Enter Number: "<<endl;
    cin>>n;
    return n;
}

int while_sum(int num) {
    int sum = 0, i;
    while (i <= num) {
        sum += i;
        ++i;
    }
    return sum;
}

int for_sum(int num) {
    int sum = 0, i;
    for (i = 1; i <= num; ++i) {
        sum += i;
    }
    return sum;
}

