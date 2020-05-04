#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#define file_in "grades.txt"

void print_final(string x[], float y[]);

int main() {
    ifstream in;
    in.open(file_in);
    string line;
    string names[6];
    float aves[6];
    int y;
    int i = 0;
    while (getline(in, line)) {
            names[i] = line.substr(0, line.find_first_of(" ", 0));
            //in.ignore('\n');
            i++;
    }
    in.close();
    i = 0;
    in.open(file_in);
    in.ignore(6, ' ');
    while(in >> y) {
        aves[i] += y;
        i++;
    }

    print_final(names, aves);

//    in.ignore(5, ' ');

//    if(in.is_open()) {
//        while(in >> y) {
//            t += y;
//            cout<<y<<" "<<endl;
//        }
//        cout<<t<<endl;
//        in.close();
//    }
    return 0;
}

void print_final(string x[], float y[]) {
    cout<<"Student Name\tAverage Grade\tLetter Grade"<<endl;
    for(int i = 0; i < 6; i++) {
        cout<<x[i]<<'\t'<<y[i]<<endl;
    }
}

