#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstddef>
using namespace std;

#define file_in "grades.txt"

void print_fin(int numlines, string name[][2], double average[]);
void nameExtract(int counter, string str, string name[][2]);
double getAverage(string str);
char letterGrade(double average);

int main() {
    ifstream in(file_in);
    if(!in) {
        cout<<"File not found..."<<endl;
        return 1;
    }

    // declare number of lines and iterator vars
    int lines, i;
    lines = 0, i = 0;
    string line;

    // get number of lines in the file
    while(getline(in, line)) {
        ++lines;
    }
    
    //start at the beginning
    in.clear();
    in.seekg(0, ios::beg);

    // define variables
    string names[lines][2];
    
    double aves[lines];

    while (getline(in, line)) {
       nameExtract(i, line, names);
       aves[i] = getAverage(line); 
       i++;
    }
    print_fin(lines, names, aves);
    return 0;
}

void nameExtract(int counter, string str, string name[][2]) {
    stringstream ss(str);
    ss >> name[counter][0] >> name[counter][1];
    //size_t temp;
    //name[counter][0] = str.substr(0, str.find_first_of(" ", 0));
    //stringstream ss(name[counter][0]);
    //ss >> temp;
    //name[counter][1] = str.substr(temp, str.find_first_of(" ", 0));
    //char space = ' ';
    //string firstName;
    //int temp = 0;
    //name[counter][0] = str.substr(0, str.find_first_of(space, 0));
    //cout<<name[counter][0];

    //name[counter][0] = str.substr(0, str.find_first_of(&space, 0));
    //firstName = name[counter][0];
    //cout<<"name_"<<firstName<<"_";
    //size_t temp;
    //stringstream stave(name[counter][0]);
    //stave.seekg(0, ios::end);
    //temp = stave.tellg();
    //temp = firstName.length();
    //int k = str.find_first_of(&space, temp, 2);
    //cout<<"k = "<<k<<"_"; 
    
    //cout<<"temp "<<temp<<"_";
    //name[counter][1] = str.substr(temp, k);
    
    //cout<<name[counter][1]<<"_"<<endl;
}


void print_fin(int numlines, string name[][2], double average[]) {
    cout<<"Student Name\tAverage Grade\tLetter Grade"<<endl;
    for(int i = 0; i < numlines; i++) {
        cout<<name[i][0]<<' '<<name[i][1]<<"\t     "
            <<average[i]<<"%\t     "
            <<letterGrade(average[i])<<endl;
    }
}

double getAverage(string str) {
    stringstream nums;
    nums << str;
    string temp;
    int p = 0, y = 0, c = 0;
    double ave;

    while(!nums.eof()) {
        nums >> temp;
        if(stringstream(temp) >> p) {
            y += p;
            c++;
        }
        //temp = "";
    }
    //cout<<"total grades = "<<c<<endl;
    ave = y / c;
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
