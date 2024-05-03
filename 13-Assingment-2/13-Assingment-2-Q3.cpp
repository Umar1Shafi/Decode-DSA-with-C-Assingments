#include <iostream>
#include <vector>

using namespace std;

int numberOfSubarrays(vector<int>& nums, int k) {
    return atMostK(nums, k) - atMostK(nums, k - 1);
}

int atMostK(vector<int>& nums, int k) {
    int count = 0;
    int left = 0;
    int n = nums.size();
    int result = 0;
    
    for (int right = 0; right < n; ++right) {
        if (nums[right] % 2 == 1) {
            k--;
        }
        while (k < 0) {
            if (nums[left] % 2 == 1) {
                k++;
            }
            left++;
        }
        count += right - left + 1;
    }
    
    return count;
}

int main() {
    vector<int> nums1 = {1, 1, 2, 1, 1};
    int k1 = 3;
    cout << numberOfSubarrays(nums1, k1) << endl; // Output: 2

    vector<int> nums2 = {2, 4, 6};
    int k2 = 1;
    cout << numberOfSubarrays(nums2, k2) << endl; // Output: 0

    vector<int> nums3 = {2, 2, 2, 1, 2, 2, 1, 2, 2, 2};
    int k3 = 2;
    cout << numberOfSubarrays(nums3, k3) << endl; // Output: 16

    return 0;
}
