#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream f;
    f.open("test.txt");
    f<<"Some test\nMore Test\nLine three\nFour";
    f<<"\nWe could also add lines this way"<<endl;
    f<<"\tTabs and spaces";
    f.close();
    return 0;
}
