#include <iostream>
using namespace std;

void modifyArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            arr[i] += 10;
        } else {
            arr[i] *= 2;
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    modifyArray(arr, n);
    cout << "Modified array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
