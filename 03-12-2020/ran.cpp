#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>
using namespace std;

int main() {
    random_device rd;
    mt19937 e2(rd());
    uniform_real_distribution<> dist(0, 10);
    map<int, int> hist;
    for (int n = 0; n < 10000; ++n) {
        ++hist[floor(dist(e2))];
    }

    for (auto p : hist) {
        cout << fixed << setprecision(1) << setw(2)
                  << p.first << ' ' << string(p.second/200, '*') << '\n';
    }
}
