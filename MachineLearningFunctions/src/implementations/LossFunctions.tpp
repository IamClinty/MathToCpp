#include "LossFunctions.h"

template <typename T>
int LossFunctions<T>::zero_one_LossFunction(T actual, T predicted) {
    return actual == predicted ? 0 : 1;
}

template <typename T>
double LossFunctions<T>::quadratic_LossFunction(T actual, T predicted) {
    return std::pow(actual - predicted, 2);
}

template <typename T>
double LossFunctions<T>::abssolute_LossFunction(T actual, T predicted) {
    return std::abs(actual - predicted);
}

template <typename T>
double LossFunctions<T>::logarithmic_LossFunction(T actual, T p) {
    return -(actual * std::log(p) + (1-actual) * std::log(1-p));
}