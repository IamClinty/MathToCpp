#ifndef __MATHTOCPP_TEST_LINEARALGEBRA_TESTLINEARALGEBRA_H__
#define __MATHTOCPP_TEST_LINEARALGEBRA_TESTLINEARALGEBRA_H__

#include <vector>
#include "LinearAlgebra/include/SquareMatrix.h"

class TestLinearAlgebra{
public:
    static void start(){
        SquareMatrix<int, 3> square1 = SquareMatrix<int, 3>();
        std::cout << square1 << std:: endl;

        std::vector<std::vector<int>> vec = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
        SquareMatrix<int, 3> square2 = SquareMatrix<int, 3>(vec);
        std::cout << square2;
    }
};

#endif