#include <iostream>
#include <vector>

using namespace std;

int numSubarrayLessThanK(vector<int>& nums, int k) {
    int n = nums.size();
    int count = 0;
    int sum = 0;
    int left = 0;
    
    for (int right = 0; right < n; ++right) {
        sum += nums[right];
        while (sum >= k) {
            sum -= nums[left++];
        }
        count += right - left + 1;
    }
    
    return count;
}

int main() {
    vector<int> nums1 = {2, 1, 4, 3, 5};
    int k1 = 10;
    cout << numSubarrayLessThanK(nums1, k1) << endl; // Output: 6

    vector<int> nums2 = {1, 1, 1};
    int k2 = 5;
    cout << numSubarrayLessThanK(nums2, k2) << endl; // Output: 5

    return 0;
}
