#include "../../include/SquareMatrix.h"

template <typename T, unsigned short n>
SquareMatrix<T, n>::SquareMatrix():rows(n), cols(n){
    creatSquareMatrix();
}

template <typename T, unsigned short n>
SquareMatrix<T, n>::~SquareMatrix(){
    for(int i = 0; i < rows; ++i) {
        delete[] point[i];
    }
    delete[] point; 
}

template <typename T, unsigned short n>
SquareMatrix<T, n>::SquareMatrix(T** arr):rows(n), cols(n){
    creatSquareMatrix();
    for(int i = 0; i < rows; ++ i){
        for(int j = 0; j < cols; ++ j){
            point[i][j] = arr[i][j];
        }
    }
}

template <typename T, unsigned short n>
SquareMatrix<T, n>::SquareMatrix(T (&arr)[][n]):rows(n), cols(n){
    creatSquareMatrix(rows);
    for(int i = 0; i < rows; ++ i){
        for(int j = 0; j < cols; ++ j){
            point[i][j] = arr[i][j];
        }
    }
}

template <typename T, unsigned short n>
SquareMatrix<T, n>::SquareMatrix(const std::vector<std::vector<T>>& vec):rows(n), cols(n){
    int rows = vec.size();
    int cols = vec[0].size();

    creatSquareMatrix();

    if(rows != cols || rows == 0){
        std::cout << "The matrix is not a square matrix." << " |" << " rows: " << rows << " cols: " << cols << std::endl;
        return;
    }
    if(rows != this->rows){
        std::cout << "The dimensions of the square matrix do not match the dimensions of the vector." << "|" 
        << "vector rows: " << rows << " squareMatrix rows: " << this->rows << std::endl;
        return;
    }

    for(int i = 0; i < rows; ++ i){
        for(int j = 0; j < cols; ++ j){
            point[i][j] = vec[i][j];
        }
    }
}

template <typename T, unsigned short n>
std::ostream& operator<<(std::ostream& os, const SquareMatrix<T, n>& squareMatrix){
    unsigned short rows = squareMatrix.rows;
    unsigned short cols = squareMatrix.cols;
    for(int i = 0; i < rows; ++ i){
        os << "| ";
        for(int j = 0; j < cols; ++ j){
            os << squareMatrix.point[i][j] << " ";
        }
        os << "|" << "\n";
    }
    os << "size: " << rows << "*" << cols << "\n";
    return os;
}

template <typename T, unsigned short n>
SquareMatrix<T, n> SquareMatrix<T, n>::operator+(const SquareMatrix<T, n>& other) const {
    unsigned short rows = this->rows;
    unsigned short cols = this->cols;
    SquareMatrix<T, n> square = SquareMatrix<T, n>();
    for(int i = 0; i < rows; ++ i){
        for(int j = 0; j < cols; ++ j){
            square.point[i][j] = this->point[i][j] + other.point[i][j];
        }
    }
    return square;
}

template <typename T, unsigned short n>
SquareMatrix<T, n> operator*(const SquareMatrix<T, n>& lSquare, const SquareMatrix<T, n>& rSquare){
    unsigned short rows = lSquare.rows;
    unsigned short cols = lSquare.cols;
    SquareMatrix<T, n> square = SquareMatrix<T, n>();
    for(int i = 0; i < rows; ++ i){
        for(int j = 0; j < cols; ++ j){
            T sum = 0;
            for(int m = 0; m < cols; ++ m){
                sum += lSquare.point[i][m] * rSquare.point[m][j];
            }
            square.point[i][j] = sum;
        }
    }
    return square;
}

template <typename T, unsigned short n>
SquareMatrix<T, n> SquareMatrix<T, n>::transpose() const{
    SquareMatrix<T, n> square = SquareMatrix<T, n>();
    for(unsigned short i = 0; i < this->rows; ++ i){
        for(unsigned short j = 0; j < this->cols; ++ j){
            square.point[j][i] = this->point[i][j];
        }
    }
    return square;
}

template <typename T, unsigned short n>
void SquareMatrix<T, n>::creatSquareMatrix(){
    if(n > 0){
        point = new T*[n];
        for(int i = 0; i < n; ++i) {
            point[i] = new T[n]();
        }
    }
}

template <typename T, unsigned short n>
int SquareMatrix<T, n>::getRows(){
    return this->rows;
}

template <typename T, unsigned short n>
int SquareMatrix<T, n>::getCols(){
    return this->cols;
}