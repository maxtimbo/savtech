#include <iostream.h>
//all we're doing in this script is incrementing and decrementing variables `n` and `m`

int main() {
    int m = 44, n=66;
    cout << "m = "<<m<<", n = "<<n<<endl;//print the variables that have been defined
    ++m; //increment `m`
    --n; //decrement `n`
    cout << "m = "<<m<<", n = "<<n<<endl;//print the modified variables
    m++; //increment `m`
    n--; //decrement `m`
    cout << "m = "<<m<<", n = "<<n<<endl;//print the modified variables
    return 0;
}

