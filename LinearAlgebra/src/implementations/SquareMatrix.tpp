#include "../../include/SquareMatrix.h"

template <typename T, int n>
SquareMatrix<T, n>::SquareMatrix():rows(n), cols(n){
    creatSquareMatrix();
}

template <typename T, int n>
SquareMatrix<T, n>::~SquareMatrix(){
    for(int i = 0; i < rows; ++i) {
        delete[] point[i];
    }
    delete[] point; 
}

template <typename T, int n>
SquareMatrix<T, n>::SquareMatrix(T** arr):rows(n), cols(n){
    creatSquareMatrix();
    for(int i = 0; i < rows; ++ i){
        for(int j = 0; j < cols; ++ j){
            point[i][j] = arr[i][j];
        }
    }
}

// template <typename T, int cols>
// SquareMatrix<T, cols>::SquareMatrix(T (&arr)[cols][cols]):rows(cols), cols(cols){
//     creatSquareMatrix(rows);
//     for(int i = 0; i < rows; ++ i){
//         for(int j = 0; j < cols; ++ j){
//             point[i][j] = arr[i][j];
//         }
//     }
// }

template <typename T, int n>
SquareMatrix<T, n>::SquareMatrix(const std::vector<std::vector<T>>& vec):rows(n), cols(n){
    int rows = vec.size();
    int cols = vec[0].size();

    creatSquareMatrix();

    if(rows != cols || rows == 0){
        std::cout << "The matrix is not a square matrix." << "|" << " rows: " << rows << " cols: " << cols << std::endl;
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

template <typename T, int n>
std::ostream& operator<<(std::ostream& os, const SquareMatrix<T, n>& squareMatrix){
    int rows = squareMatrix.rows;
    int cols = squareMatrix.cols;
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

template <typename T, int n>
void SquareMatrix<T, n>::creatSquareMatrix(){
    if(n > 0){
        point = new T*[n];
        for(int i = 0; i < n; ++i) {
            point[i] = new T[n]();
        }
    }
}

template <typename T, int n>
int SquareMatrix<T, n>::getRows(){
    return this->rows;
}

template <typename T, int n>
int SquareMatrix<T, n>::getCols(){
    return this->cols;
}