#include <iostream>
using namespace std;

void printArrayReverse(int arr[], int size) {
    if (size <= 0) {
        return;
    }
    cout << arr[size - 1] << " ";
    printArrayReverse(arr, size - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    printArrayReverse(arr, size);
    return 0;
}
