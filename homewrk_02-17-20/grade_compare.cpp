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
    char letter_grade = det(score);
    switch(letter_grade) {
        case 'A':
            cout<<student_name<<" scored an "<<letter_grade<<" on the assignment. Great job!"<<endl;
            break;
        case 'B':
            cout<<student_name<<" needs improvement. They scored well with a "<<letter_grade<<". but could do better."<<endl;
            break;
        case 'C':
            cout<<"Welp, "<<student_name<<" isn't failing with a "<<letter_grade<<". But they may consider getting a tutor."<<endl;
            break;
        case 'D':
            cout<<student_name<<" is technically failing with a "<<letter_grade<<". Give them a firm talking-to."<<endl;
            break;
        case 'F':
            cout<<student_name<<" is failing. They should consider dropping the class or studying harder. An "<<letter_grade
                <<" is not going to work at all."<<endl;
            break;
        default:
            cout<<"Something went wrong. An invalid letter grade was entered."<<endl;
            break;
    }
    return 0;
}

