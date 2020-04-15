#include <stdio.h>
using namespace std;
 
const int numstudents=3;
const int numquizzes=5;
typedef int score [numstudents][numquizzes];

void read(score) {
    void read (Score score);
    for(int s=0; s<numstudents;s++) {
        cout<<"Student"<<s<< ":";
        for(int q=0; q<numquizzes; q++) {
            cin>>score[s][q];
        }
    }
    void printquizaverages(const Score score); {
        for(int s=0; s<numstudents; s++) {
            float sum=0;
            for (int q=0; q<numquizzes; q++) {
                sum=sum+score[s][q];
                cout<<"Quiz Average"<<s<<":"<<sum/numquizzes;
            }
        }
 
 
int main() {
    Score score;
    cout<<"Enter"<<numquizzes<<"for each student"<<endl;
    read (score);  //cin
    cout<<"Tha quiz average is":<<endl:
    printquizaverages; //cout
}       
