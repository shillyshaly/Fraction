#include <iostream>
#include <cstdlib>
#include "fraction.h"
using namespace std;

int main(){
    Fraction obj1;
    uint64_t userNum;
    int64_t userDenom;
    userNum = 11;
    userDenom = -12;
    obj1.setDenominator(userDenom);
    obj1.setNumerator(userNum);

    obj1.output();



    return 0;
}

