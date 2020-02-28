#include <iostream>
using namespace std;

bool is_valid(int sel);
bool switch_(int sel, int num);
int test_selection(int sel);
int for_sum(int num);
int while_sum(int num);
int for_squares(int num);
int while_squares(int num);
void collatz_conjecture(int num);

int main(void) {
    int nu, selection;
    cout<<"Enter a number: "<<endl;
    cin>>nu;
    cout<<"Select a program: "<<endl<<endl
        <<"1. Run Sum of Numbers as for loop"<<endl
        <<"2. Run Sum of Numbers as while loop"<<endl
        <<"3. Run Sum of Squares as for loop"<<endl
        <<"4. Run Sum of Squares as while loop"<<endl
        <<"5. Run Collatz Conjecture"<<endl
        <<"6. Run All "<<endl<<endl
        <<"Selection: ";
    cin>>selection;
    while (is_valid(selection) == false) {
        cout<<"Please make a valid selection"<<endl;
        cin>>selection;
    }
    switch_(selection, nu);
}

bool is_valid(int sel) {
    bool y_n;
    if (sel > 0 && sel <= 6) {
        y_n = true;
    } else {
        y_n = false;
    }
    return y_n;
}

bool switch_(int sel, int num) {
    switch(sel) {
        case 1:
            cout<<for_sum(num)<<endl;
            break;
        case 2:
            cout<<while_sum(num)<<endl;
            break;
        case 3:
            cout<<for_squares(num)<<endl;
            break;
        case 4:
            cout<<while_squares(num)<<endl;
            break;
        case 5:
            collatz_conjecture(num);
            break;
        case 6:
            cout<<"For Loop Sum of Number n = "<<num<<endl
                <<for_sum(num)<<endl
                <<"While Loop Sum of Number n = "<<num<<endl
                <<while_sum(num)<<endl
                <<"For Loop Sum of Squares n = "<<num<<endl
                <<for_squares(num)<<endl
                <<"While Loop Sum of Squares n = "<<num<<endl
                <<while_squares(num)<<endl
                <<"Collatz Conjecture using number n = "<<num<<endl;
            collatz_conjecture(num);
            break;
        default:
            cout<<"Error, please select a valid entry"<<endl;
            break;
    }
    return true;
}

int for_sum(int num) {
    int sum = 0, i = 1;
    for (i = 1; i <= num; ++i) {
        sum += i;
    }
    return sum;
}

int while_sum(int num) {
    int sum = 0, i = 1;
    while (i <= num) {
        sum += i;
        ++i;
    }
    return sum;
}

int for_squares(int num) {
    int i = 0, product = 0;
    for (i = 0; i <= num; i++) {
       product += (i * i);
   }
   return product;
} 

int while_squares(int num) {
    int i = 0, product = 0;
    while (i < num) {
        i++;
        product += (i * i);
    }
    return product;
}

void collatz_conjecture(int num) {
    int step_count = 0;
    while (num != 1) {
        int x = num % 2;
        if (x == 0) {
            num = (num / 2);
            cout<<num<<endl;
        } else {
            num = (3 * num) + 1;
            cout<<num<<endl;
        }
        ++step_count;
    }
    cout<<"The conjecture took "<<step_count<<" steps"<<endl;
}
