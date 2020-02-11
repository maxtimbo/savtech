#include <iostream>
#include <string>
using namespace std;

string repeat(string s, int n) {
    string s1 = s;
    for (int i=1; i<n;i++)
        s += s1;
    return s;
}

int main() {
    int voltage;
    bool lamp_status;
    bool nerd_fonts;
    string newline = "\n";
    string space = " ";
    
    system("clear");
    cout << "Do you have Nerd Fonts installed and enabled on this terminal?"
         << " [y/n]"<<endl;
    char answer;
    cin >> answer;

    if (answer == 'y') {
        nerd_fonts = true;
    } else if (answer == 'n') {
        nerd_fonts = false;
    }

    system("clear");
    cout << "Enter a voltage: "<<endl;
    cin >>voltage;
    ( voltage >= 20 ) ? lamp_status = true : lamp_status = false;
    system("clear");    

    if (nerd_fonts) {
        if (lamp_status) {
            cout<<repeat(newline, 10)<<repeat(space, 20)<<""<<repeat(newline, 10);
        } else {
            cout<<repeat(newline, 10)<<repeat(space, 20)<<""<<repeat(newline, 10);
        }
    } else {
        if (lamp_status) {
            cout<<"Lamp On"<<endl;
        } else {
            cout<<"Lamp Off"<<endl;
        }
    }

    return 0;
}
