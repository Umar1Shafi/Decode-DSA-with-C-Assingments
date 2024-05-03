#include <iostream>
using namespace std;

void printWave(int A[][3], int rows, int cols) {
    bool flag = true; // Flag to indicate direction of traversal
    for (int j = 0; j < cols; ++j) {
        // If flag is true, traverse downwards, else traverse upwards
        if (flag) {
            for (int i = rows - 1; i >= 0; --i) {
                cout << A[i][j] << " ";
            }
        } else {
            for (int i = 0; i < rows; ++i) {
                cout << A[i][j] << " ";
            }
        }
        flag = !flag; // Toggle flag for next iteration
    }
}

int main() {
    int A[][3] = {{1, 2, 3},
                  {4, 5, 6},
                  {7, 8, 9}};

    printWave(A, 3, 3);

    return 0;
}
