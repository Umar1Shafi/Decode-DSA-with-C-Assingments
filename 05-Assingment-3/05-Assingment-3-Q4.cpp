#include <iostream>
#include <unordered_set>
using namespace std;

bool isSubset(int arr1[], int n1, int arr2[], int n2) {
    unordered_set<int> set;
    for (int i = 0; i < n1; i++) {
        set.insert(arr1[i]);
    }
    for (int i = 0; i < n2; i++) {
        if (set.find(arr2[i]) == set.end()) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {2, 4, 6};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    if (isSubset(arr1, n1, arr2, n2)) {
        cout << "arr2 is a subset of arr1." << endl;
    } else {
        cout << "arr2 is not a subset of arr1." << endl;
    }
    return 0;
}
