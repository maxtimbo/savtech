#include <iostream>
using namespace std;

void for_2i();
void while_2i();

int main() {
    cout<<"Please select from the following options:"<<endl
        <<"1. Execute the for loop"<<endl
        <<"2. Execute the while loop"<<endl
        <<"3. Execute both loops sequentially"<<endl;
    int sel;
    cin>>sel;
    if (sel > 0 && sel < 4) {
        switch(sel) {
            case 1:
                for_2i();
                break;
            case 2:
                while_2i();
                break;
            case 3:
                for_2i();
                while_2i();
                break;
            default:
                cout<<"You should never see this error message"<<endl;
                break;
        }
    } else {
        cout<<"Wrong choice, I'm lazy and don't want to write a bool"<<endl;
    }
    return 0;
}

void for_2i() {
    int x = 0;
    for (int i = 1; i <= 10; ++i) {
        x += 2*i+1;
    }
    cout<<"x = "<<x<<endl;
}

void while_2i() {
    int i = 1;
    int x = 0;
    while (i <= 10) {
        x += 2 * i + 1;
        ++i;
    }
    cout<<"x = "<<x<<endl;
}
