#include <iostream>
#include <vector>

using namespace std;

int numOfSubarrays(vector<int>& arr, int k, int threshold) {
    int n = arr.size();
    int sum = 0;
    int count = 0;
    int target = k * threshold;
    
    for (int i = 0; i < k; ++i) {
        sum += arr[i];
    }
    
    if (sum >= target) {
        count++;
    }
    
    for (int i = k; i < n; ++i) {
        sum += arr[i] - arr[i - k];
        if (sum >= target) {
            count++;
        }
    }
    
    return count;
}

int main() {
    vector<int> arr1 = {2, 2, 2, 2, 5, 5, 5, 8};
    int k1 = 3, threshold1 = 4;
    cout << numOfSubarrays(arr1, k1, threshold1) << endl; // Output: 3

    vector<int> arr2 = {11, 13, 17, 23, 29, 31, 7, 5, 2, 3};
    int k2 = 3, threshold2 = 5;
    cout << numOfSubarrays(arr2, k2, threshold2) << endl; // Output: 6

    return 0;
}
