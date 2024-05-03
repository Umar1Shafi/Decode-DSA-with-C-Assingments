#include <iostream>
using namespace std;

int findLargestElement(int A[][4], int n, int m) {
    int maxElement = A[0][0];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (A[i][j] > maxElement) {
                maxElement = A[i][j];
            }
        }
    }
    return maxElement;
}

int main() {
    int A[][4] = {{1, 3, 4, 6},
                  {2, 4, 5, 7},
                  {3, 5, 6, 8},
                  {4, 6, 7, 9}};

    int largest = findLargestElement(A, 4, 4);
    cout << largest << endl;

    return 0;
}
