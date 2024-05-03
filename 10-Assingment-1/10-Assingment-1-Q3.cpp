#include <iostream>
#include <vector>
using namespace std;

int rowWithMaxOnes(vector<vector<int>>& matrix) {
    int maxOnes = 0, rowIndex = -1;
    for (int i = 0; i < matrix.size(); i++) {
        int onesCount = 0;
        for (int j = 0; j < matrix[i].size(); j++) {
            if (matrix[i][j] == 1) {
                onesCount++;
            }
        }
        if (onesCount > maxOnes) {
            maxOnes = onesCount;
            rowIndex = i;
        }
    }
    return rowIndex;
}

int main() {
    vector<vector<int>> matrix = {{0, 1, 1, 1},
                                   {0, 0, 1, 1},
                                   {1, 1, 1, 1},
                                   {0, 0, 0, 0}};
    int maxOnesRowIndex = rowWithMaxOnes(matrix);
    cout << "Row with maximum number of 1's: " << maxOnesRowIndex << endl;
    return 0;
}
