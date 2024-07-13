#include "LossFunctions.h"

template <typename T>
int LossFunctions<T>::zeroOne(T actual, T predicted) {
    return actual == predicted ? 0 : 1;
}

template <typename T>
double LossFunctions<T>::quadratic(T actual, T predicted) {
    return std::pow(actual - predicted, 2);
}

template <typename T>
double LossFunctions<T>::abssolute(T actual, T predicted) {
    return std::abs(actual - predicted);
}

template <typename T>
double LossFunctions<T>::logarithmic(T actual, T p) {
    return -(actual * std::log(p) + (1-actual) * std::log(1-p));
}