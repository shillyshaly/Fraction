//
// Created by Jamie on 9/18/2019.
//

#ifndef CLASSPRACTICE_FRACTION_H
#define CLASSPRACTICE_FRACTION_H

#include <cstdint>

namespace edu{
    namespace vcccd{
        namespace vc{
            namespace csv15{

                class Fraction {
                private:
                    double realValue;
                    int64_t denominator;
                    uint64_t numerator;

                public:
                    Fraction(uint64_t, int64_t);

                    double getRealValue();

                    int64_t getDenominator() const;

                    void setDenominator(int64_t);

                    uint64_t getNumerator() const;

                    void setNumerator(uint64_t);

                    void output();
                };
            };
        }

    }

}






#endif //CLASSPRACTICE_FRACTION_H
