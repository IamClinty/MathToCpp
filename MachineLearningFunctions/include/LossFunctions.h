#ifndef __MATHTOCPP_MACHINELEARNINGFUNCTIONS_LOSSFUNCTIONS_H__
#define __MATHTOCPP_MACHINELEARNINGFUNCTIONS_LOSSFUNCTIONS_H__

#include <cmath>

template <typename T>
class LossFunctions {
public:
    static int    zero_one_LossFunction(T actual, T predicted);
    static double quadratic_LossFunction(T actual, T predicted);
    static double abssolute_LossFunction(T actual, T predicted);
    static double logarithmic_LossFunction(T actual, T predicted);
};

#include "../src/implementations/LossFunctions.tpp"

#endif