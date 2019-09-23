//
// Created by Jamie on 9/18/2019.
//

#ifndef CLASSPRACTICE_FRACTION_H
#define CLASSPRACTICE_FRACTION_H
using edu::vcccd::vc::csv15::Fraction;

#include <cstdint>

class Fraction {
private:
    double realValue;
    int64_t denominator;
    uint64_t numerator;

public:
    Fraction();
    double getRealValue();
    int64_t getDenominator() const;
    void setDenominator(int64_t);
    uint64_t getNumerator() const;
    void setNumerator(uint64_t);
    void output();
};


#endif //CLASSPRACTICE_FRACTION_H
