#include <iostream>
#include <unordered_map>
using namespace std;

int firstNonRepeatingElement(int arr[], int n) {
    unordered_map<int, int> countMap;
    for (int i = 0; i < n; i++) {
        countMap[arr[i]]++;
    }
    for (int i = 0; i < n; i++) {
        if (countMap[arr[i]] == 1) {
            return arr[i];
        }
    }
    return -1; // Indicates no non-repeating element found
}

int main() {
    int arr[] = {1, 2, 3, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int firstNonRepeating = firstNonRepeatingElement(arr, n);
    if (firstNonRepeating != -1) {
        cout << "First non-repeating element: " << firstNonRepeating << endl;
    } else {
        cout << "No non-repeating element found in the array." << endl;
    }
    return 0;
}
