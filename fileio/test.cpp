#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#define default_in "grades.txt"
#define default_out "summary.txt"


struct files {
    string file_in;
    string file_out;
};

void print_args(
        string &file_in, 
        string &file_out) {
    std::cout
        <<"The function is looking for "
        <<file_in
        <<endl;
}

int main(int argc, char *argv[]) {
    files f;
    if(argc == 1) {
        f.file_in = default_in;
        f.file_out = default_out;
        cout<<"only one arg passed "
            <<argv[0]
            <<endl;
    }
    if(argc == 2) {
        f.file_in = argv[1];
        f.file_out = default_out;
        cout<<"Arguments :"
            <<endl
            <<argv[0]
            <<endl
            <<argv[1]
            <<endl;
    }
    print_args(f.file_in, f.file_out);
    ifstream in(f.file_in);
    if(!in) {
        cout
            <<"File not found..."
            <<endl;
        return 1;
    }
    string line;
    while(getline(in, line)) {
        cout<<line<<endl;
    }
    return 0;
}
