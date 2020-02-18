#include <iostream>
using namespace std;

int while_ (int n) {
    int i = 0, k = 0;
    while (i < n) {
        i++;
        k += (i * i);
    }
    return k;
}

int for_ (int n) {
    int i = 0, k = 0;
    for (i = 0; i <= n; i++) {
       k += (i * i);
   }
   return k;
} 

int main() {
    int use_num;
    cout<<"Enter a number:"<<endl;
    cin>>use_num;
    cout<<"While:"<<endl
        <<while_(use_num)<<endl;
    cout<<endl<<endl;
    cout<<"For: "<<endl
        <<for_(use_num)<<endl;
    return 0;
}
