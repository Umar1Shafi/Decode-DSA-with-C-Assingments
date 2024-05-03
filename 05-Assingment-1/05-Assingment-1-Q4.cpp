#include <iostream>
#include <unordered_set>
using namespace std;

bool containsDuplicates(int arr[], int n) {
    unordered_set<int> seen;
    for (int i = 0; i < n; ++i) {
        if (seen.find(arr[i]) != seen.end()) {
            return true;
        }
        seen.insert(arr[i]);
    }
    return false;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (containsDuplicates(arr, n)) {
        cout << "Array contains duplicates." << endl;
    } else {
        cout << "Array does not contain duplicates." << endl;
    }

    return 0;
}
