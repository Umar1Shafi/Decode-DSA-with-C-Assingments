#include <iostream>
#include <vector>
using namespace std;

// Function to perform binary search in an array sorted in decreasing order
int binarySearch(vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {10, 8, 6, 4, 2, 1};
    int target = 4;
    int index = binarySearch(arr, target);
    if (index != -1) {
        cout << "Element " << target << " found at index " << index << endl;
    } else {
        cout << "Element " << target << " not found in the array." << endl;
    }
    return 0;
}
