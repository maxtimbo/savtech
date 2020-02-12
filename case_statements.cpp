#include <iostream>
#include <time.h>
using namespace std;

int main() {
    int room_number, progs;
    system("clear");

    cout<<"select a program: 1, 2, or 3"<<endl;
    cin>>progs;
    switch(progs) {
        case 1:
            cout<<"Please select a room number: "<<endl;
            cin>>room_number;  
            switch(room_number) {
                case 1:
                    cout<<"Turn on the lights in room 1"<<endl;
                    break;
                case 2:
                    cout<<"Turn on the lights in room "<<room_number<<endl;
                    break;
                case 9:
                    srand(time(NULL));
                    int guess;
                    int random_number;
                    random_number = rand() % 10 +1;
                    cout<<"Turn on the lights in room "<<room_number<<endl
                        <<"You need a password to turn the lights on in this room."<<endl
                        <<"Enter a password: "<<endl;
                    while (guess != random_number) {
                        cin >> guess;
                        if (guess != random_number) {
                                if (guess < random_number) {
                                   cout<<"higher... ";
                                } else if (guess > random_number) {
                                   cout<<"lower... ";
                                }
                                cout <<"try again"<<endl;
                        } else {
                                cout << "The Lights are now on"<<endl;
                        }
                    }
                    break;
                default:
                    cout<<"Invalid Room Number"<<endl;
                    break;
            }
            break;
        case 2:
            int year;
            cout<<"enter a year:"<<endl;
            cin>>year;
            switch(year) {
                case 2020:
                    cout<<"somewords"<<endl;
                    break;
                case 2019:
                    cout<<"some other words"<<endl;
                    break;
                default:
                    cout<<"invalid year"<<endl;
             }
            break;
        case 3:
            char grade;
            cout<<"Enter a grade (A, B, C, D, or F)"<<endl;
            cin>>grade;
            switch(grade) {
                case 'A': case 'a':
                    cout<<"you got "<<grade<<endl;
                    break;
                case 'B': case 'b':
                    cout<<"you got "<<grade<<endl;
                    break;
                case 'C': case 'c':
                    cout<<"you got "<<grade<<endl;
                    break;
                case 'D': case 'd':
                    cout<<"you got "<<grade<<endl;
                    break;
                case 'F': case 'f':
                    cout<<"you got "<<grade<<endl;
                    break;
                default:
                    cout<<"Incorrect value"<<endl;
                    break;
            }
            break;
        default:
            cout<<"incorrect value"<<endl;
            break;
    }
    return 0;
}
