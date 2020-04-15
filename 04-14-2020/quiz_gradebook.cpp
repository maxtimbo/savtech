#include <iostream>
using namespace std;

const int numstu = 3;
const int numqui = 5;
typedef int score[numstu][numqui];
void readscore(score sc);
void score_average(score sc);


int main() {
    score sc;
    cout<<"Enter "<<numqui<<" for each student:"<<endl;
    readscore(sc);
    cout<<"Quiz averages: "<<endl;
    score_average(sc);
    cout<<endl;
    return 0;
}

void readscore(score c) {
    for(int s = 0; s < numstu; s++) {
        cout << "Student "<<s+1<<":"<<endl;
        for(int q = 0; q < numqui; q++) {
            cout<<"            score : ";
            cin>>c[s][q];
        }
    }
}

void score_average(score c) {
    for(int s = 0; s < numstu; s++) {
        cout<<"               Student "<<s+1<<":"<<endl;
        float sum = 0;
        for(int q = 0; q < numqui; q++) {
            sum = sum+c[s][q];
            cout<<"                         Average at Quiz "<<q+1<<": "<<sum/numqui<<endl;
        }
    }
}
