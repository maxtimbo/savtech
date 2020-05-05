#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

#define file_in "grades.txt"

void print_fin(string name[][2], float average[]);
void nameExtract(int counter, string str, string name[][2]);
float getAverage(string str);
char letterGrade(float average);

int main() {
    ifstream in(file_in);
    int numlines = 0;
    string line;

    // get number of lines in the file
    while(getline(in, line)) {
        ++numlines;
    }
    
    //start at the beginning
    in.clear();
    in.seekg(0, ios::beg);

    // define variables
    string names[numlines][2];
    
    float aves[numlines];
    int y;

    // iterator
    int i = 0;

    while (getline(in, line)) {
       nameExtract(i, line, names);
       aves[i] = getAverage(line); 
       i++;
    }
    print_fin(names, aves);
    return 0;
}

void nameExtract(int counter, string str, string name[][2]) {
    size_t temp;
    name[counter][0] = str.substr(0, str.find_first_of(" ", 0));
    stringstream ss(name[counter][0]);
    ss >> temp;
    name[counter][1] = str.substr(temp, str.find_first_of(" ", 0));
}


void print_fin(string name[][2], float average[]) {
    cout<<"Student Name\tAverage Grade\tLetter Grade"<<endl;
    for(int i = 0; i < 6; i++) {
        cout<<name[i][0]<<' '<<name[i][1]<<"\t     "
            <<average[i]<<"%\t     "
            <<letterGrade(average[i])<<endl;
    }
}

float getAverage(string str) {
    stringstream nums;
    nums << str;
    string temp;
    int p, y, c = 1;
    float ave;

    while(!nums.eof()) {
        nums >> temp;
        if(stringstream(temp) >> p) {
            y += p;
            ++c;
        }
        temp = "";
    }
    ave = y/c;
    return ave;
}

char letterGrade(float average) {
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
