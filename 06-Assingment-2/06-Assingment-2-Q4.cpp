#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generateSpiralMatrix(int n) {
    vector<vector<int>> matrix(n, vector<int>(n, 0));
    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    int num = 1;

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; ++i)
            matrix[top][i] = num++;
        ++top;

        for (int i = top; i <= bottom; ++i)
            matrix[i][right] = num++;
        --right;

        for (int i = right; i >= left; --i)
            matrix[bottom][i] = num++;
        --bottom;

        for (int i = bottom; i >= top; --i)
            matrix[i][left] = num++;
        ++left;
    }

    return matrix;
}

int main() {
    int n = 3;
    vector<vector<int>> spiralMatrix = generateSpiralMatrix(n);

    cout << "[";
    for (int i = 0; i < n; ++i) {
        cout << "[";
        for (int j = 0; j < n; ++j) {
            cout << spiralMatrix[i][j];
            if (j != n - 1) cout << ",";
        }
        cout << "]";
        if (i != n - 1) cout << ",";
    }
    cout << "]" << endl;

    return 0;
}
