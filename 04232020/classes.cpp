#include <iostream>
using namespace std;

class happylane {
    public:
        void stayhappy() {
            cout<<"Blah balh blah"<<endl;
        }

        void howhappy(int h, int j) {
            if(h<10) {
                cout<<"Whatever dude"<<endl;
            } else if (h > j) {
                for(int i = 0; i < j; i++) {
                    cout<<j + 1<<" we gonna do this?"<<endl;
                }
            }
        }
        
        int isValid(int j) {
            bool val;
            cin>>j;
            while(val == false) {
                if(j < 0 || j > 20) {
                    val = false;
                    cout<<"ain't gonna work dude.. "<<endl;
                    cin>>j;
                } else if(j >= 1 && j <= 20) {
                    val = true;
                }
            }
            return j;
        }

        void book(int how_many) {
            cout<<"Wow, you read "<<how_many<<" books. Nerd."<<endl;
        }

};

int main() {
    happylane happyobject;
    happyobject.stayhappy();
    int k, l, b;
    cout<<"how many books have you read this summer?"<<endl;
    cin>>b;
    happyobject.book(b);
    cout<<"\nPick a number between 0 and 20"<<endl;
    cin>>l;
    happyobject.isValid(l);
    cout<<"\nPick a number between 0 and 10"<<endl;
    cin>>k;
    happyobject.howhappy(k, l);

    return 0;
}
