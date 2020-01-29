Here I will quickly retype the program and then retype the corrections:

// Read the user's name from the keyboard and show it on the screen
#include <string>
//You will also need to include <iostream> in order to get input and outputs from the user
//We will also declare `using namespace std;`

int main()
{
    string Name;
    cout "Please enter your full name.    ";
    // The above line will throw an error as it needs the `<<`
    cin >> Name;
    cout << "\n\n yout name is " << answer;
    //the variable `answer` was never declared. This will throw an error.
    return 0;
}

// Below is a corrected version of the program:
#include <iostrean>
#include <string>
using namespace std;

int main() {
    string Name;
    cout << "Please enter your full name. "<<endl;
    cin >> Name;
    cout << "\n\n Your name is "<<Name;
    return 0
}
