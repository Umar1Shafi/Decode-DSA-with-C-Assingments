#include <iostream>
using namespace std;

int findIndex(int arr[], int size, int key, int index = 0) {
    if (index == size) {
        return -1;
    }
    if (arr[index] == key) {
        return index;
    }
    return findIndex(arr, size, key, index + 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 3;
    cout << "Index of " << key << ": " << findIndex(arr, size, key) << endl;
    return 0;
}
