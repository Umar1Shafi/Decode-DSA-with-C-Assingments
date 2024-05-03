#include <iostream>
using namespace std;

int findSmallestMissingPositive(int arr[], int n) {
    int smallestMissing = 1; // Initialize the smallest missing positive element

    // Iterate through the array
    for (int i = 0; i < n; i++) {
        // If the current element is negative or greater than the array size, skip it
        if (arr[i] <= 0 || arr[i] > n) {
            continue;
        }

        // If the current element is not equal to its index + 1, it's the smallest missing positive element
        if (arr[i] != i + 1) {
            smallestMissing = i + 1;
            break;
        }
    }

    return smallestMissing;
}

int main() {
    int arr[] = {1, 2, 3, 5}; // Example sorted array
    int n = sizeof(arr) / sizeof(arr[0]);

    int smallestMissing = findSmallestMissingPositive(arr, n);
    cout << "The smallest missing positive element is: " << smallestMissing << endl;

    return 0;
}
