#include "fraction.h"
#include <cstdint>
#include <iostream>
#include <algorithm>
using namespace std;


Fraction::Fraction(){          //Constructor initializing data members.
    realValue = 0.0;
    denominator = 0;
    numerator = 0;
}

double Fraction::getRealValue() {          //Returns original values from user.
    realValue = (double)numerator/(double)denominator;
    return realValue;
}

void Fraction::setNumerator(uint64_t userNumerator) {         //sets user input as NUMERATOR
    numerator = userNumerator;
}

void Fraction::setDenominator(int64_t userDenominator ) {        //sets user input as DENOMINATOR
    denominator = userDenominator;
}

uint64_t Fraction::getNumerator() const {       //return the entered numerator in lowest terms
    return numerator;
}
int64_t Fraction::getDenominator() const {      //return the entered denominator in lowest terms
    return denominator;
}

void Fraction::output() {                                               //finds GCD and divides each entry by it
    int64_t a = numerator, b = denominator, gcd = 0;          //reducing input to lowest form

    if ((b == 0) && (a == 0)) {
        cout << "NAN" << endl;
    }else if (a == 0){
        cout << 0 << endl;
    }else if (b == 0){
        cout << "INF" << endl;
    }else {
        gcd = abs(__gcd(a, b));
    }

        numerator = numerator / gcd;
        denominator = denominator / gcd;

        cout  << numerator << " / " << denominator << endl;
}