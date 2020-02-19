#include <iostream>
using namespace std;

bool is_valid(int test_num) {
    bool test_output;
    if (test_num >= 0 && test_num <= 100) {
        test_output = true;
    } else {
        test_output = false;
    } 
    return test_output;
}

char det(int valid_score) {
    char determinator;
    if (valid_score >= 90) {
        determinator = 'A';
    } else if (valid_score <= 89 && valid_score >= 80) {
        determinator = 'B';
    } else if (valid_score <= 79 && valid_score >= 70) {
        determinator = 'C';
    } else if (valid_score <= 69 && valid_score >= 60) {
        determinator = 'D';
    } else if (valid_score <= 59 && valid_score >= 0) {
        determinator = 'F';
    }
    return determinator;
}

int main() {
    int score;
    string student_name;
    cout<<"Enter Student's Name: "<<endl;
    getline(cin, student_name);
    do {
        cout<<"Enter "<<student_name<<"'s score:"<<endl;
        cin>>score;
    } while (is_valid(score) == false);
    switch(score) {
        case 90 ... 100:
            cout<<student_name<<" scored an "<<det(score)<<"."<<endl;
            break;
        case 80 ... 89:
            cout<<student_name<<" scored a "<<det(score)<<"."<<endl;
            break;
        case 70 ... 79:
            cout<<student_name<<" scored a "<<det(score)<<"."<<endl;
            break;
        case 60 ... 69:
            cout<<student_name<<" scored a "<<det(score)<<"."<<endl;
            break;
        case 0 ... 59:
            cout<<student_name<<" scored a "<<det(score)<<"."<<endl;
            break;
        default:
            cout<<"Invalid Score."<<endl;
            break;
    }
    return 0;
}

