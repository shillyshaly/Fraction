#include <iostream>
#include <cstdlib>
#include "fraction.h"
using namespace edu::vcccd::vc::csv15;
using namespace std;

int main(){
    Fraction obj1(0,0);
    cout << obj1.getDenominator() << endl;
    cout << obj1.getNumerator() << endl;
    cout << obj1.getRealValue() << endl;
    obj1.output();



    return 0;
}

