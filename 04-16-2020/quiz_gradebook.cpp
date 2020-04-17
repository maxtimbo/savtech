#include <iostream>
using namespace std;

const int numstu = 3;
const int numqui = 5;
typedef int score[numstu][numqui];
void readscore(score);
void score_average(score);
void class_average(score);


int main() {
    score sc;
    cout<<"Enter "<<numqui<<" quiz scores for each student:"<<endl;
    readscore(sc);
    cout<<"Quiz averages: "<<endl;
    score_average(sc);
    cout<<"Class average: ";
    class_average(sc);
    cout<<endl;
    return 0;
}

void readscore(score sc) {
    for(int s = 0; s < numstu; s++) {
        cout << "Student "<<s+1<<":"<<endl;
        for(int q = 0; q < numqui; q++) {
            cout<<"            score : ";
            cin>>sc[s][q];
        }
    }
}

void score_average(score sc) {
    for(int s = 0; s < numstu; s++) {
        cout<<"               Student "<<s+1<<":"<<endl;
        float sum = 0;
        for(int q = 0; q < numqui; q++) {
            sum = sum + sc[s][q];
            cout<<"                         Average at Quiz "<<q+1<<": "<<sum/numqui<<endl;
        }
    }
}

void class_average(score sc) {
    float class_av = 0;
    for(int s = 0; s < numstu; s++) {
        float sum = 0;
        for(int q = 0; q < numqui; q++) {
            sum = sum + sc[s][q];
        }
        class_av += sum/numqui;
    }
    cout<<class_av/numstu<<endl;
}
