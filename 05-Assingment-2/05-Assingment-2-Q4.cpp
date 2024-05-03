#include <iostream>
using namespace std;

int findDifference(int arr[], int n) {
    int sumEven = 0, sumOdd = 0;
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            sumEven += arr[i];
        } else {
            sumOdd += arr[i];
        }
    }
    return sumEven - sumOdd;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int difference = findDifference(arr, n);
    cout << "Difference between sum of elements at even indices and sum of elements at odd indices: " << difference << endl;
    return 0;
}
