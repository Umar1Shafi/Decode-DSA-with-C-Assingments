#include <iostream>
#include <vector>
using namespace std;

void printSumTriangle(vector<int> arr) {
    if (arr.size() == 0) {
        return;
    }
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    vector<int> nextLevel;
    for (int i = 0; i < arr.size() - 1; i++) {
        nextLevel.push_back(arr[i] + arr[i + 1]);
    }
    printSumTriangle(nextLevel);
}

int main() {
    vector<int> arr = {5, 4, 3, 2, 1};
    printSumTriangle(arr);
    return 0;
}
