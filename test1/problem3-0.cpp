#include <iostream>
using namespace std;

int main() {
    int a = 40; //Define variable "a" as datatype integer and declare that it is 40
    int b = 6; //Define variable "b" as datatype integer and declare that it is 6
    int sum = a+b; //Define variable "sum" as datatype integer -- do  math
    int diff = a-b; //define variable "diff" as datatype integer -- do math
    int prod = a*b; //define variable "prod" as datatype integer -- do math
    double quot = a/b; //define variable "quot" as datatype double (in case there are decimals) -- do math
    double remain = a % b; //define variable "remain" as datatype double -- do math

    //below, i just print out each of the variables that are doing maths...
    cout << "The sum: "<<sum<<endl;
    cout << "The diffence: "<<diff<<endl;
    cout << "The product: "<<prod<<endl;
    cout << "The quotant: "<<quot<<endl;
    cout << "The remainder: "<<remain<<endl;
    return 0;
}
