#include <iostream>
using namespace std;

const int numstu = 3;
const int numexa = 5;
typedef int score[numstu][numexa];
void AskExamData(score);
void ExamTotalandAve(score);
enum select {P1=1, P2, P3, P4, P5};
typedef int selection;
int isValid(int min, int max);
void enterContinue();
void mainMenu();
void problem1();
void problem2Menu();
void problem3();
void problem4();
void problem5();

int main() {
    mainMenu();
    return 0;
}

void mainMenu() {
    selection sel;
    cout<<"_____Main Menu_____"<<endl;
    for(int i = 0;i < 5; i++) {
        cout<<i + 1<<". Problem #"<<i + 1<<endl;
    }
    cout<<"6. Exit Program"<<endl;
    sel = isValid(1, 6);
    switch (sel) {
        case P1:
            problem1();
            break;
        case P2:
            problem2Menu();
            break;
        case P3:
            problem3();
            break;
        case P4:
            problem4();
            break;
        case P5:
            problem5();
            break;
        case 6:
            cout<<"Goodbye"<<endl;
            break;
        default:
            cout<<"Please make a valid selection"<<endl;
            cout<<sel<<endl;
            break;
    }
}

int isValid(int min, int max) {
    bool val;
    selection sel;
    cin>>sel;
    while(val == false) {
        if(sel < min-1 || sel > max+1) {
            cout<<"Please make a valid selection... "<<endl;
            cin>>sel;
            val = false;
        } else if(sel >= min && sel <= max) {
        val = true;
        }
    }
    return sel;
}

void enterContinue() {
    cout<<"Press any key to continue... ";
    cin.ignore();
    cin.get();
}

void problem1() {
    cout<<"Q1: What data type must be used as an array index?"<<endl
        <<"\tA: int datatype"<<endl<<endl
        <<"Q2: What is meant by the term zero-indexed?"<<endl
        <<"\tA: The index begins counting at zero, e.g. 0, 1, 2, 3"<<endl<<endl
        <<"Q3: What type of array is a C-string?"<<endl
        <<"\tA: An array of datatype char."<<endl<<endl
        <<"Q4: Name three situations in which data are maintained "
        <<"ideally as an array."<<endl
        <<"\tA: A simple list"<<endl
        <<"\t   Key/value (dict in python) data structures"<<endl
        <<"\t   SQL type data entry"<<endl
        <<"\t   anything one may want to iterate over..."<<endl<<endl;
    enterContinue();
    mainMenu();
}

void problem2Menu() {
    selection p2sel;
    cout<<"_____Problem 2 Menu_____"<<endl;
    for(int i = 0; i < 4; i++) {
        cout<<"--> p2 - "<<i+21<<endl;
    }
    cout<<"--> p2 - 25: Return to Main Menu"<<endl;
    p2sel = isValid(21, 25);
    switch (p2sel) {
        case 21:
            cout<<"\n1\tint list{25},i;"<<endl
                <<"2\tfloat a, b, c;"<<endl
                <<"3\tfor(i = 0, i<25; ++i)"<<endl
                <<"4\t{"<<endl
                <<"5\t\tlisti = 0.0;"<<endl
                <<"6\t}"<<endl
                <<"\n --> Variable `listi` on line 5 is never declared"<<endl;
            enterContinue();
            problem2Menu();
            break;
        case 22:
            cout<<"\n1\t#include <iostream>"<<endl
                <<"2\tusing namespace std;"<<endl
                <<"3"<<endl
                <<"4\tint main()"<<endl
                <<"5\t{"<<endl
                <<"6\t\tfloat[100];"<<endl
                <<"7\t\tint j;"<<endl
                <<"8\t\tcout<<numbers;"<<endl
                <<"9\t}"<<endl
                <<"\n --> There is also no return value for `int main()`"<<endl;
            enterContinue();
            problem2Menu();
            break;
        case 23:
            cout<<"\n1\t#include <iostream>"<<endl
                <<"2\tusing namespace std;"<<endl
                <<"3\tchar [] FillArray();"<<endl
                <<"4\tint main()"<<endl
                <<"5\t{"<<endl
                <<"6\t\tint values[75];"<<endl
                <<"7\t\tvalues = FillArray();"<<endl
                <<"8\t\treturn 0;"<<endl
                <<"9\t}"<<endl
                <<"\n --> Function `FillArray()` is declared, "<<endl
                <<"but never defined. You may also get an error "<<endl
                <<"on line 3 depending on your compiler."<<endl;
            enterContinue();
            problem2Menu();
            break;
        case 24:
            cout<<"\n1\t#include <iostream>"<<endl
                <<"2\tusing namespace std;"<<endl
                <<"3\tvoid SortArray(int values[]);"<<endl
                <<"4\tint main()"<<endl
                <<"5\t{"<<endl
                <<"6\t\tint values[75];"<<endl
                <<"7\t\t//assume values becomes filled with data"<<endl
                <<"8\t\tSortArray(values[75]);"<<endl
                <<"9\t\treturn 0;"<<endl
                <<"10\t}"<<endl
                <<"11\tvoid SortArray(int values)"<<endl
                <<"12\t{"<<endl
                <<"13\t\tfor(i = 0; i < 75; ++i)"<<endl
                <<"14\t\t{"<<endl
                <<"15\t\t\tif(values[i] < values[i-1]);"<<endl
                <<"16\t\t\tvalues[i] = values[i-1];"<<endl
                <<"17\t\t}"<<endl
                <<"18\t}"<<endl
                <<"\n --> Variable `i` is never declared at line 13. "<<endl;
            enterContinue();
            problem2Menu();
            break;
        case 25:
            mainMenu();
            break;
        default:
            cout<<"please make a valid selection"<<endl;
            break;
    }
}

void problem3() {
    cout<<"\n1\t#include <iostream>"<<endl
        <<"2\tusing namespace std;"<<endl
        <<"3\tint main() {"<<endl
        <<"4\t int someArray[6] = {12, 13, 14, 15, 16, 17};"<<endl
        <<"5\t int i = 0;"<<endl
        <<"6\t while (i < 6) {"<<endl
        <<"7\t\tcout<<\"Value of someArray[\"<<i<<\"]: \"<<someArray[i]<<endl;"<<endl
        <<"8\t\t++i;"<<endl
        <<"9\t }"<<endl
        <<"10\t return 0;"<<endl
        <<"11\t}"<<endl;
    enterContinue();
    int someArray[6] = {12, 13, 14, 15, 16, 17};
    int i = 0;
    while (i < 6) {
        cout<<"Value of someArray["<<i<<"]: "<<someArray[i]<<endl;
        ++i;
    }
    enterContinue();
    mainMenu();
}

void problem4() {
    cout<<"\n1\t#include <iostream>"<<endl
        <<"2\tusing namespace std;"<<endl
        <<"3\tint main() {"<<endl
        <<"4\t int someArray[6] = {12, 43, 76, 23, 12, 76};"<<endl
        <<"5\t for(int i = 0; i < 6; i++) {"<<endl
        <<"6\t  cout<<\"Value of someArray[\"<<i<<\"]: \"<<someArray[i]<<endl;"<<endl
        <<"7\t }"<<endl
        <<"8\t return 0;"<<endl
        <<"9\t}"<<endl;
    enterContinue();
    int someArray[6] = {12, 43, 76, 23, 12, 76};
    for(int i = 0; i < 6; i++) {
        cout<<"Value of someArray["<<i<<"]: "<<someArray[i]<<endl;
    }
    enterContinue();
    mainMenu();
}

void problem5() {
    score sc;
    cout<<"Enter "<<numexa<<" Exam scores for each student: "<<endl;
    AskExamData(sc);
    cout<<"Exam total and average: "<<endl;
    ExamTotalandAve(sc);
    cout<<endl;
    cout<<"For code, please read source lines 222 - 258"<<endl;
    enterContinue();
    mainMenu();
}

void AskExamData(score sc) {
    for(int s = 0; s < numstu; s++) {
        cout<<"\tStudent "<<s+1<<": "<<endl;
        for(int q = 0; q < numexa; q++) {
            cout<<"\t\tExam "<<q+1<<" score: ";
            cin>>sc[s][q];
        }
    }
}

void ExamTotalandAve(score sc) {
    float class_av = 0;
    for(int s = 0; s < numstu; s++) {
        cout<<"\tStudent "<<s+1<<endl;
        float sum = 0;
        for(int q = 0; q < numexa; q++) {
            sum += sc[s][q];
        }
        cout<<"\t\tTotal = "<<sum<<endl;
        cout<<"\t\tAverage = "<<sum/numexa<<endl;
        class_av += sum/numexa;
    }
    cout<<"\nClass Exam Average: "<<class_av/numstu<<endl;
}


