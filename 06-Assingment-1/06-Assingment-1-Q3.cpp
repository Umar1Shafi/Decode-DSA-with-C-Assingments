#include <iostream>
using namespace std;

int sumRectangle(int A[][4], int n, int m, int l1, int r1, int l2, int r2) {
    int sum = 0;
    for (int i = l1; i <= l2; ++i) {
        for (int j = r1; j <= r2; ++j) {
            sum += A[i][j];
        }
    }
    return sum;
}

int main() {
    int A[][4] = {{1, 2, -3, 4},
                  {0, 0, -4, 2},
                  {1, -1, 2, 3},
                  {-4, -5, -7, 0}};

    int l1 = 1, r1 = 2, l2 = 3, r2 = 3;

    int sum = sumRectangle(A, 4, 4, l1, r1, l2, r2);
    cout << sum << endl;

    return 0;
}
