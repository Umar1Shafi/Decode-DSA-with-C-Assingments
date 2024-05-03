#include <iostream>
#include <unordered_map>
using namespace std;

int findUnique(int arr[], int n) {
    unordered_map<int, int> countMap;
    for (int i = 0; i < n; ++i) {
        countMap[arr[i]]++;
    }
    for (auto it : countMap) {
        if (it.second == 1) {
            return it.first;
        }
    }
    return -1; // Indicates no unique element found
}

int main() {
    int arr[] = {1, 2, 2, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int unique = findUnique(arr, n);
    if (unique != -1) {
        cout << "Unique element in the array: " << unique << endl;
    } else {
        cout << "No unique element found in the array." << endl;
    }
    return 0;
}
