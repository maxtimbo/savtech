#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;
    string color;
    a = 5;
    b = 5;
    c = a + b;
    cout << a << " + " <<  b  <<  "\n" <<  c;
    cout << "\nHello world! \n";
    cout << "This is some more text \n";
    cout << "What is your favorite color? ";
    getline (cin, color);
    cout << "Fascinating, you pleeb. Your favorite color is " << color << "\n";
    cout <<  "Want to do some maths? \n\nYeah, me niether, but here we go:\nPick a number between 1-10:\n";
    cin >> d;
    bool ab = false;
    while (ab == false) {
        if (d <= 10 && d >= 0) {
            cout << "Great, your number is " << d << "\n";
            ab = true;
        } else {
            cout << "No, man. Pick a number between 1 and 10.\n";
            cin >> d;
        }
    }
    cout << "Alrighty, now let's pick a number between 10 and 20.\n";
    cin >> e;
    bool ac = false;
    while (ac == false) {
        if (e <= 20 && e >= 10) {
            cout << "Great, the number you chose is " << e << "\n";
            ac = true;
        } else {
            cout << "No, you idiot! We went over this before. I said a number between 10 and 20 this time!\nPay ATTENTION!\n";
            cin >> e;
        }
    }

    int t = d+e;
    cout << "Cool, let's do this simple ass math. " << d << " + " << e << " = " << d+e << "\n";
    cout << "Also check here: " << t << "\n";

    return 0;
}
