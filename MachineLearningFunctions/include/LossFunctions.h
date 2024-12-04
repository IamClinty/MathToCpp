#ifndef __MATHTOCPP_MACHINELEARNINGFUNCTIONS_LOSSFUNCTIONS_H__
#define __MATHTOCPP_MACHINELEARNINGFUNCTIONS_LOSSFUNCTIONS_H__

#include <cmath>

template <typename T>
class LossFunctions {
public:
    static int    zeroOne(T actual, T predicted);
    static double quadratic(T actual, T predicted);
    static double abssolute(T actual, T predicted);
    static double logarithmic(T actual, T predicted);
};

#include "../src/implementations/LossFunctions.tpp"

#endif