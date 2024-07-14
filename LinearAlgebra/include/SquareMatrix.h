#ifndef __MATHTOCPP_LINEARALGEBRA_SQUAREMATRIX_H__
#define __MATHTOCPP_LINEARALGEBRA_SQUAREMATRIX_H__

#include <iostream>
#include <vector>

template <typename T>
class SquareMatrix
{
private:
    int rows;
    int cols;
    T**  point;
public:
    SquareMatrix(int n);
    SquareMatrix(T** arr, int rows, int cols);
    SquareMatrix(const std::vector<std::vector<T>>& vec);
    ~SquareMatrix();
};

#include "../src/implementations/SquareMatrix.tpp"

#endif