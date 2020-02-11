#include <iostream>
using namespace std;
//
// Replace decision if with operator `?`
// 
// if the voltage is greater than 20volts
// turn the lamp on
// else
// turn the lamp off
//
// Replace the `decision if` with `operator '?'`

int main() {
    int voltage;
    bool lamp_status;
    cout << "Enter a voltage: "<<endl;
    cin >>voltage;
    if ( voltage >= 20 ) {
        cout<<"the lamp is on"<<endl;
    } else if ( voltage <= 20 ) {
        cout<<"not enough power"<<endl<<"the lamp is off"<<endl;
    }

    cout << "\n<-- Let's compare those again -->\n\n";
    cout << "lamp_status variable is set to: "<<lamp_status<<endl<<endl;
    ( voltage >= 20 ) ? lamp_status = true : lamp_status = false;
    
    cout << "<-- The Expression that was run -->"<<endl
         << "( voltage >= 20 ) ? lamp_status = true : lamp_status = false"<<endl
         << "\nThe Voltage Variable is: "<<voltage<<endl
         << "The lamp status is: "<<lamp_status<<endl;
    
    if (lamp_status == true) {
        cout<<""<<endl;
    } else {
        cout<<""<<endl;
    }
    return 0;
}
