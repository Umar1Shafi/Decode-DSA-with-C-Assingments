#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int kthSmallestElement(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    return nums[k - 1];
}

int main() {
    vector<int> arr = {3, 1, 4, 2, 5};
    int k = 3;

    int kthSmallest = kthSmallestElement(arr, k);
    cout << "The " << k << "th smallest element is: " << kthSmallest << endl;

    return 0;
}
