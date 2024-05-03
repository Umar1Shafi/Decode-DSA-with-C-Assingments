#include <iostream>
#include <vector>
using namespace std;

// Function to search for target in the matrix
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int rows = matrix.size();
    if (rows == 0) return false;
    int cols = matrix[0].size();
    
    int left = 0, right = rows * cols - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        int midElement = matrix[mid / cols][mid % cols];
        if (midElement == target) {
            return true;
        } else if (midElement < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return false;
}

int main() {
    vector<vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target1 = 3, target2 = 13;
    cout << "Matrix:\n";
    for (auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    cout << "Target " << target1 << " is " << (searchMatrix(matrix, target1) ? "present" : "not present") << " in the matrix." << endl;
    cout << "Target " << target2 << " is " << (searchMatrix(matrix, target2) ? "present" : "not present") << " in the matrix." << endl;

    return 0;
}
