#include <bits/stdc++.h>
using namespace std;
void addMatrices(int mat1[][3],  int mat2[][3], int result[][3], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}
void printMatrix(int mat[][3], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << mat[i][j] << " ";
        }
        cout<<endl;
    }
}
int main() {
    const int ROWS = 3;
    const int COLS = 3;

    int matrixA[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matrixB[ROWS][COLS] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int matrixSum[ROWS][COLS];

   
    addMatrices(matrixA, matrixB, matrixSum, ROWS, COLS);

    cout << "Matrix A:" <<endl;
    printMatrix(matrixA, ROWS, COLS);

    cout << "Matrix B:" <<endl;
    printMatrix(matrixB, ROWS, COLS);

    cout << "Sum of Matrices (A + B):" <<endl;
    printMatrix(matrixSum, ROWS, COLS);

    return 0;
}