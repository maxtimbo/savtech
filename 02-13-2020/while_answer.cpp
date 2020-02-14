#include <iostream>
using namespace std;

int main() {
    string answer;
    cout<<"Do you want some sugar on your tongue? [yes/no]"<<endl;
    answer = "yes";
        while (answer == "yes") {
            getline(cin, answer);
            cout<<"She put sugar on my tongue"<<endl;
        }
    cout<<"Lame"<<endl;
    return 0;
}
