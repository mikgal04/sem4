#include <iostream>
#include "Matrix.h"

int main() {
    Matrix mat1(2, 2);
    std::cout << "Initialized Matrix 1" << std::endl;

    mat1.fillRandom();
    std::cout << "Matrix 1 after filling with random values:" << std::endl;
    std::cout << mat1;

    std::cout << "Element at position (1,1): " << mat1[1][1] << std::endl;

    Matrix mat2(2, 2);
    mat2.fillRandom();
    std::cout << "Matrix 2:" << std::endl;
    std::cout << mat2;

    mat1 += mat2;
    std::cout << "Matrix 1 after addition with Matrix 2:" << std::endl;
    std::cout << mat1;

    Matrix sum = mat1 + mat2;
    std::cout << "Sum of Matrix 1 and Matrix 2:" << std::endl;
    std::cout << sum;

    mat1 -= mat2;
    std::cout << "Matrix 1 after subtraction with Matrix 2:" << std::endl;
    std::cout << mat1;

    Matrix diff = mat1 - mat2;
    std::cout << "Difference of Matrix 1 and Matrix 2:" << std::endl;
    std::cout << diff;

    Matrix prod = mat1 * mat2;
    std::cout << "Product of Matrix 1 and Matrix 2:" << std::endl;
    std::cout << prod;

    if (mat1 == mat2) {
        std::cout << "Matrix 1 is equal to Matrix 2." << std::endl;
    }
    else {
        std::cout << "Matrix 1 is not equal to Matrix 2." << std::endl;
    }

    if (mat1 != mat2) {
        std::cout << "Matrix 1 is not equal to Matrix 2." << std::endl;
    }
    else {
        std::cout << "Matrix 1 is equal to Matrix 2." << std::endl;
    }
}