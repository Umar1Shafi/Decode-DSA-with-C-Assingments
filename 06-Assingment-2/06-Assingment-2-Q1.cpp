#include <iostream>
using namespace std;

void printDiagonals(int A[][3], int size) {
    cout << A[0][0] << "       " << A[0][size - 1] << endl;
    for (int i = 1; i < size - 1; ++i) {
        for (int j = 0; j < size; ++j) {
            if (j == i || j == size - 1 - i)
                cout << "    " << A[i][j];
            else
                cout << "";
        }
        cout << endl;
    }
    cout << A[size - 1][0] << "       " << A[size - 1][size - 1] << endl;
}

int main() {
    int A[][3] = {{1, 2, 3},
                  {4, 5, 6},
                  {7, 8, 9}};

    printDiagonals(A, 3);

    return 0;
}
