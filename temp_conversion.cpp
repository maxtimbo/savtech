#include <iostream>
using namespace std;

double get_c_result(float f) {
    double c;
    c = (f-32.0) * 5.0/9.0;
    return c;
}

double get_f_result(float c) {
    double f;
    f = (9.0/5.0) * c + 32.0;
    return f;
}

int main() {
    float f,c;
    char f_or_c;
    string question1 = "Please enter a tempurature: \n";
    cout << "Would you like to convert Fahrenheit to Celsius or Celsius to Fahrenheit?\n(f or c)\n";
    cin >> f_or_c;
    if (f_or_c == 'c') {
        cout << question1;
        cin >> f;
        cout << get_c_result(f) << "\n";
    } else if (f_or_c == 'f') {
        cout << question1;
        cin >> c;
        cout << get_f_result(c) << "\n";
    }
    return 0;
}
