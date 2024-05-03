#include <iostream>
#include <vector>
using namespace std;

void generateArrays(const vector<int>& A, const vector<int>& B, vector<int>& result, int idxA, int idxB, bool fromA) {
    if (result.size() > 0 && !fromA && result.back() == B[idxB]) {
        for (int num : result) {
            cout << num << " ";
        }
        cout << endl;
    }
    if (fromA) {
        for (int i = idxA; i < A.size(); i++) {
            result.push_back(A[i]);
            generateArrays(A, B, result, i + 1, idxB, false);
            result.pop_back();
        }
    } else {
        for (int i = idxB; i < B.size(); i++) {
            result.push_back(B[i]);
            generateArrays(A, B, result, idxA, i + 1, true);
            result.pop_back();
        }
    }
}

void generateArraysFromSortedArrays(const vector<int>& A, const vector<int>& B) {
    vector<int> result;
    generateArrays(A, B, result, 0, 0, true);
}

int main() {
    vector<int> A = {10, 15, 25};
    vector<int> B = {1, 5, 20, 30};
    cout << "Arrays generated from A and B:" << endl;
    generateArraysFromSortedArrays(A, B);
    return 0;
}
