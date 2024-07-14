#include "SquareMatrix.h"

template <typename T>
SquareMatrix<T>::SquareMatrix(int n):rows(n), cols(n){
    point = new T*[rows];
    for(int i = 0; i < cols; ++i) {
        point[i] = new T[cols]();
    }
}

template <typename T>
SquareMatrix<T>::~SquareMatrix(){
    for(int i = 0; i < rows; ++i) {
        delete[] point[i];
    }
    delete[] point; 
}

template <typename T>
SquareMatrix<T>::SquareMatrix(T** arr, int rows, int cols):rows(rows), cols(cols){
    if(rows != cols || rows == 0){
        std::cout << "The matrix is not a square matrix." << std::endl;
        return;
    }
    for(int i = 0; i < rows; ++ i){
        for(int j = 0; j < cols; ++ j){
            point[i][j] = arr[i][j];
        }
    }
}

template <typename T>
SquareMatrix<T>::SquareMatrix(const std::vector<std::vector<T>>& vec){
    int rows = vec.size();
    int clos = vec.at(0).size();
    this->rows = rows;
    this->cols = cols;
    if(rows != cols || rows == 0){
        std::cout << "The matrix is not a square matrix." << std::endl;
        return;
    }
    for(int i = 0; i < rows; ++ i){
        for(int j = 0; j < cols; ++ j){
            point[i][j] = vec[i][j];
        }
    }
}