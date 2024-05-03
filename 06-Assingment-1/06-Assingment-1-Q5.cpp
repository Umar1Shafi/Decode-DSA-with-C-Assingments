#include <iostream>
using namespace std;

int findMaxRowSum(int A[][4], int n, int m) {
    int maxSum = 0;
    int maxRow = -1;

    for (int i = 0; i < n; ++i) {
        int rowSum = 0;
        for (int j = 0; j < m; ++j) {
            rowSum += A[i][j];
        }
        if (rowSum > maxSum) {
            maxSum = rowSum;
            maxRow = i + 1; // Adjusting index to start from 1
        }
    }

    return maxRow;
}

int main() {
    int A[][4] = {{1, 3, 5, 7},
                  {3, 4, 7, 8},
                  {1, 4, 12, 3}};

    int maxRow = findMaxRowSum(A, 3, 4);
    cout << "Row number having maximum sum: " << maxRow << endl;

    return 0;
}
