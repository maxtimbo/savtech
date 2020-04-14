#include <iostream>
using namespace std;

int main() {
    enum Day {sun, mon, tue, wed, thu, fri, sat};
    float high[sat+1] = {88.6, 34.2, 23.1, 43.2, 34.2, 23.4, 23.6};
    for(Day i = sun; i <= sat; i = Day(i+1)) {
        cout<<"The high temp for day "<<i<<" was "<<high[i]<<endl;
    };

    return 0;
}
