#include <iostream>
#include <time.h>
using namespace std;

int main() {
    int some_num, guess;
    srand(time(NULL));
    some_num = rand() % 10 + 1;
    cout <<"pick a number between 1 & 10"<<endl;
    while (guess != some_num) {
        cin >> guess;
        if ( guess != some_num) {
            if (guess < some_num) {
                cout<<"higher... ";
            } else if (guess > some_num) {
                cout<<"lower... ";
            }
            cout <<"try again"<<endl;
        } else {
            cout <<"you're a cool dude"<<endl;
        }
    }
    return 0;
}
