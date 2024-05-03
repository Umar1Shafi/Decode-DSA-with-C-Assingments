#include <iostream>
using namespace std;

void printMiddleElements(int A[][5], int size) {
    int middle = size / 2;

    // Printing middle row
    for (int j = 0; j < size; ++j) {
        cout << A[middle][j] << " ";
    }
    cout << endl;

    // Printing middle column
    for (int i = 0; i < size; ++i) {
        cout << A[i][middle] << endl;
    }
}

int main() {
    int A[][5] = {{1, 2, 3, 4, 5},
                  {3, 4, 5, 6, 7},
                  {7, 6, 5, 4, 3},
                  {8, 7, 6, 5, 4},
                  {1, 2, 37, 8, 0}};

    printMiddleElements(A, 5);

    return 0;
}
