#include <iostream>
using namespace std;

int main() {
    int i=1;
    do {
        cout<<"i = "<<i<<endl;
        i=i+1;
    } while (i<=10);
    --i;
   while (i<=10 && i>=0) {
      cout<<"i = "<<i<<endl;
      --i;
   } 
    return 0;
}
