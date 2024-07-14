#ifndef __MATHTOCPP_LINEARALGEBRA_SQUAREMATRIX_H__
#define __MATHTOCPP_LINEARALGEBRA_SQUAREMATRIX_H__

#include <iostream>
#include <vector>

template <typename T, int n>
class SquareMatrix
{
public:
    /**
    * @brief SquareMatrix初始化，用于创建方阵
    * @author GongZheng
    */
    SquareMatrix();
    /**
    * @brief SquareMatrix初始化，用于创建方阵
    *        arr由调用者释放内存
    * @author GongZheng
    */
    SquareMatrix(T** arr);
    SquareMatrix(T (&arr)[n][n]);
    SquareMatrix(const std::vector<std::vector<T>>& vec);
    /**
    * @brief SquareMatrix析构函数，释放point以及point[]指向的内存
    * @author GongZheng
    */
    ~SquareMatrix();

    int getRows();
    int getCols();

private:
    int rows;
    int cols;
    T**  point;

    void creatSquareMatrix();

    template <typename U, int n1>
    friend std::ostream& operator<<(std::ostream& os, const SquareMatrix<U, n1>& squareMatrix);
};

#include "../src/implementations/SquareMatrix.tpp"

#endif