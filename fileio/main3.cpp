#include <cstddef>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <tuple>
#include <vector>

using namespace std;

#define default_in "grades.txt"
#define default_out "summary.txt"

struct files {
    string file_in;
    string file_out;
};

struct record {
    string first_name;
    string last_name;
    double average;
};

void print_fin(const vector<record> &records, string &out);
void nameExtract(string str, string &first_name, string &last_name);
tuple<string, string> nameExtract(string str);
double getAverage(string str);
char letterGrade(double average);
int work(istream &in, string &out);


int main(int argc, char *argv[]) {
    files f;
    if(argc == 1) {
        f.file_in = default_in;
        f.file_out = default_out;
        std::cout
            <<"No arguments were passed, default filenames will be used."
            <<endl
            <<"You can specify input and output filenames..."
            <<endl
            <<"\'$ "<<argv[0]<<" inputfile.txt outputfile.txt\'"
            <<endl
            <<endl;
    }
    if(argc == 2) {
        f.file_in = argv[1];
        f.file_out = default_out;
        std::cout
            <<"Intput file "<<f.file_in<<" will be used."
            <<endl
            <<"No output file specified, using default output file "
            <<f.file_out
            <<endl
            <<endl;
    }
    if(argc == 3) {
        f.file_in = argv[1];
        f.file_out = argv[2];
        std::cout
            <<"Using input file "
            <<f.file_in
            <<"\nUsing output file "
            <<f.file_out
            <<endl
            <<endl;
    }
    if(argc >= 4) {
        std::cout
            <<"Too many arguments specified"
            <<endl
            <<"Please specify only one input and one output file..."
            <<endl
            <<"e.g. \'$ "<<argv[0]<<" inputfile.txt outputfile.txt"
            <<endl;
        return 1;
    }



    ifstream in(f.file_in);
    if(!in) {
        std::cout
            <<"File "<<f.file_in<<" not found..."<<endl;
        return 1;
    }

    work(in, f.file_out);
    return 0;
}


void nameExtract(string str, string &first_name, string &last_name) {
    stringstream ss(str);
    ss >> first_name >> last_name;
}


tuple<string, string> nameExtract(string str) {
    tuple<string, string> r;

    nameExtract(str, get<0>(r), get<1>(r));

    return r;
}

int work(istream &in, string &out) {
    vector<record> records;

    string line;
    while (getline(in, line)) {
        auto average = getAverage(line);
        auto r = record {
            "",
            "",
            average
        };

        nameExtract(line, r.first_name, r.last_name);
        records.push_back(r);
    }

    print_fin(records, out);

    return 0;
}

void print_record(std::ostream &os, const record &r) {
    int fullNameLength = r.first_name.length() + r.last_name.length() + 1;
    //std::cout<<fullNameLength<<endl;
    string spaces;
    if(fullNameLength <= 15) {
        spaces = "\t\t\t";
    } else if (fullNameLength >= 16) {
        spaces = "\t\t";
    }
    os
        << r.first_name 
        << ' '
        << r.last_name
        << spaces
        << r.average
        << "%\t     "
        << letterGrade(r.average)
        << '\n';
}


void print_fin(const vector<record> &records, string &out) {
    ofstream o(out);
    o 
        <<"Student Name\t\tAverage Grade\tLetter Grade"
        <<endl
        <<"-------------------------------------------------------"
        <<endl;
    for (const auto &r : records) {
        print_record(o, r);
    }

    std::cout 
        <<"Student Name\t\tAverage Grade\tLetter Grade"
        <<endl
        <<"-------------------------------------------------------"
        <<endl;
    for (const auto &r : records) {
        print_record(std::cout, r);
    }
}

double getAverage(string str) {
    istringstream nums {str};

    int sum = 0, count = 0;

    while(!nums.eof()) {
        string temp;
        nums >> temp;
        int isItInt = 0;
        //const int p2 = stoi(temp);
        //cout << '[' << temp << ']' << flush;
        if (istringstream(temp) >> isItInt) {
            sum += isItInt;
            count++;
        }
    }
    const double ave = sum / count;
    return ave;
}

char letterGrade(double average) {
    char grade;
    if (average <= 59) {
        grade = 'F';
    } else if (average >= 60 && average <= 69) {
        grade = 'D';
    } else if (average >= 70 && average <= 79) {
        grade = 'C';
    } else if (average >= 80 && average <= 89) {
        grade = 'B';
    } else if (average >= 90) {
        grade = 'A';
    }
    return grade;
}
