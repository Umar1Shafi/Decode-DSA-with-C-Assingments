#include <iostream>
using namespace std;

void addMatrices(int A[][3], int B[][3], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            A[i][j] += B[i][j];
        }
    }
}

int main() {
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[3][3] = {{4, 5, 8}, {0, 0, 8}, {1, 2, 0}};

    addMatrices(A, B, 3, 3);

    // Printing the result matrix (A is modified)
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
