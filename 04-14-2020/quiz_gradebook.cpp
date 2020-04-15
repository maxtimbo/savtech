#include <iostream>
using namespace std;

const int numstu = 3;
const int numqui = 5;
typedef int score[numstu][numqui];
void readscore(score);
void score_average(score);


int main() {
    score sc;
    cout<<"Enter "<<numqui<<" for each student:"<<endl;
    readscore(sc);
    cout<<"Quiz average: ";
    score_average(sc);
    return 0;
}

void readscore(score s) {
    for(int s = 0; s < numstu; s++) {
        cout << "student "<<s<<" : ";
        for(int q = 0; q < numqui; q++) {
            cin>>score[s][q];
        }
    }
}

void score_average(score) {
    for(int s = 0; s < numstu; s++) {
        float sum = 0;
        for(int q = 0; q < numqui; q++) {
            sum = sum+score[s][q];
            cout<<"Quiz Average "<<s<<" : "<<sum/numqui;
        }
    }
}
