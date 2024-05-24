#include <iostream>
#include <vector>

template <typename T>
class Matrix {
private:
    std::vector<std::vector<T>> data;
    int rows;
    int cols;

public:
    Matrix(int numRows, int numCols) : rows(numRows), cols(numCols) {
        data.resize(rows, std::vector<T>(cols));
    }

    T& operator()(int row, int col) {
        return data[row][col];
    }

    void print() {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                std::cout << data[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    Matrix<float> matrixFloat(2, 3);
    matrixFloat(0, 0) = 2.5;
    matrixFloat(0, 1) = 3.3;
    matrixFloat(0, 2) = 2.4;
    matrixFloat(1, 0) = 4.5;
    matrixFloat(1, 1) = 5.6;
    matrixFloat(1, 2) = 3.7;

    std::cout << "Matrix type <float>:" << std::endl;
    matrixFloat.print();

    Matrix<double> matrixDouble(3, 2);
    matrixDouble(0, 0) = 2.1;
    matrixDouble(0, 1) = 1.2;
    matrixDouble(1, 0) = 1.5;
    matrixDouble(1, 1) = 2.4;
    matrixDouble(2, 0) = 4.5;
    matrixDouble(2, 1) = 5.6;

    std::cout << "\nMatrix type <double>:" << std::endl;
    matrixDouble.print();

    Matrix<int> matrixInt(2, 2);
    matrixInt(0, 0) = 2;
    matrixInt(0, 1) = 4;
    matrixInt(1, 0) = 5;
    matrixInt(1, 1) = 3;

    std::cout << "\nMatrix type <int>:" << std::endl;
    matrixInt.print();

    return 0;
}