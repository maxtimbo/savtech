#include <cstddef>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <tuple>
#include <vector>

using namespace std;

struct files {
    string file_in;
    string file_out;
//char file_in[] = "grades.txt";
//static const char file_in[] = "grades.txt";
//static const char file_out[] = "summary.txt";
//static const char file_out[] = "summary.txt";

struct record {
    string first_name;
    string last_name;
    double average;
};

void file_assign(
void print_fin(const vector<record> &records);
void nameExtract(string str, string &first_name, string &last_name);
tuple<string, string> nameExtract(string str);
double getAverage(string str);
char letterGrade(double average);
int work(istream &in);


int main(int argc, char *argv[]) {
    m 
    if (argc == 1) {
        record.file = "grades.txt";
        static const char file_out[] = "summary.txt";
        std::cout
            <<"No file names specified..."
            <<endl
            <<"Using default parameters..."
            <<endl;
    }
    if (argc == 2) {
        //argv[1] >> file_in;
        //static const char file_out[] = "summary.txt";
        std::cout
            <<"Using input file "
            <<file_in
            <<"\nNo output file specified..."
            <<endl
            <<"Using default output file "
            <<file_out
            <<endl;
    }
    if (argc == 3) {
        //argv[1] >> file_in;
        //argv[2] >> file_out;
        std::cout
            <<"Using input file "
            <<file_in
            <<"\nUsing output file "
            <<file_out
            <<endl;
    }

    ifstream in(file_in);
    if(!in) {
        std::cout<<"File not found..."<<endl;
        return 1;
    }

    return work(in);
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

int work(istream &in) {
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

    print_fin(records);

    return 0;
}

void print_record(std::ostream &os, const record &r) {
    os
        << r.first_name
        << ' '
        << r.last_name
        << "\t\t\t"
        << r.average
        << "%\t     "
        << letterGrade(r.average)
        << '\n';
}


void print_fin(const vector<record> &records) {
    ofstream out(file_out);
    out << "Student Name\t\tAverage Grade\tLetter Grade\n";
    for (const auto &r : records) {
        print_record(out, r);
    }

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
