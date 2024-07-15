#ifndef __MATHTOCPP_LINEARALGEBRA_SQUAREMATRIX_H__
#define __MATHTOCPP_LINEARALGEBRA_SQUAREMATRIX_H__

#include <iostream>
#include <vector>

template <typename T, unsigned short n>
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
    SquareMatrix(T (&arr)[][n]);
    SquareMatrix(const std::vector<std::vector<T>>& vec);
    /**
    * @brief SquareMatrix析构函数，释放point以及point[]指向的内存
    * @author GongZheng
    */
    ~SquareMatrix();

    /**
    * @brief SquareMatrix operator<<实现
    * @author GongZheng
    */
    template <typename U, unsigned short m>
    friend std::ostream& operator<<(std::ostream& os, const SquareMatrix<U, m>& squareMatrix);

    /**
    * @brief SquareMatrix operator+实现
    *        注意：+左右方阵的阶数需相同
    * @author GongZheng
    */
    SquareMatrix<T, n> operator+(const SquareMatrix<T, n>& other) const;

    /**
    * @brief SquareMatrix operator*实现
    * @author GongZheng
    */
    template <typename U, unsigned short m>
    friend SquareMatrix<U, m> operator*(const SquareMatrix<U, m>& lSquare, const SquareMatrix<U, m>& rSquare);

    int getRows();
    int getCols();

private:
    unsigned short rows;
    unsigned short cols;
    T**  point;

    void creatSquareMatrix();
};

#include "../src/implementations/SquareMatrix.tpp"

#endif