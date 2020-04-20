#include <iostream>
using namespace std;

enum sel {sc=1, pc, s_p_c, exit_};
void circuit_menu();
// helper functions
int isValid(int min, int max);

int main() {
    circuit_menu();
    return 0;
}

void circuit_menu() {
    int select;
    cout<<"\nSelect Electical Circuits"<<endl
        <<"1.\tSeries Circuit"<<endl
        <<"2.\tParallel Circuit"<<endl
        <<"3.\tSeries and Parallel Circuits"<<endl
        <<"4.\tExit"<<endl;
    select = isValid(1, 4);
    switch (select) {
        case sc:
            cout<<"\n--->Series Circuit was selected<---"<<endl;
            circuit_menu();
            break;
        case pc:
            cout<<"\n--->Parallel Circuit was selected<---"<<endl;
            circuit_menu();
            break;
        case s_p_c:
            cout<<"\n--->Series and Parallel Circuit selected<---"<<endl;
            circuit_menu();
            break;
        case exit_:
            cout<<"Goodbye"<<endl;
            break;
        default:
            cout<<"Please make a valid selection..."<<endl;
            break;
    }
}

int isValid(int min, int max) {
    bool val;
    int sel;
    cin>>sel;
    while(val == false) {
        if(sel < min-1 || sel > max +1) {
            val = false;
            cout<<"Please make a valid selection..."<<endl;
            cin>>sel;
        } else if(sel >= min && sel <= max) {
            val = true;
        }
    }
    return sel;
}

