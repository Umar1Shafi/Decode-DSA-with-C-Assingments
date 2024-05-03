#include <iostream>
using namespace std;

void rotateMatrix(int A[][3], int size) {
    for (int i = size - 1; i >= 0; --i) {
        for (int j = 0; j < size; ++j) {
            cout << A[j][i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int A[][3] = {{1, 2, 3},
                  {4, 5, 6},
                  {7, 8, 9}};

    rotateMatrix(A, 3);

    return 0;
}
