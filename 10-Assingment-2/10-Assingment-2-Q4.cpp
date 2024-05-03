#include <iostream>
#include <vector>
using namespace std;

// Function to search for target in the rotated sorted array
bool search(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            return true;
        }
        // If left part is sorted
        if (nums[left] < nums[mid]) {
            if (nums[left] <= target && target < nums[mid]) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        // If right part is sorted
        } else if (nums[mid] < nums[right]) {
            if (nums[mid] < target && target <= nums[right]) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        // If elements at both ends are same, ignore them
        } else {
            left++;
            right--;
        }
    }
    return false;
}

int main() {
    vector<int> nums1 = {2, 5, 6, 0, 0, 1, 2}, nums2 = {2, 5, 6, 0, 0, 1, 2};
    int target1 = 0, target2 = 3;
    cout << "Target " << target1 << " is " << (search(nums1, target1) ? "present" : "not present") << " in the array." << endl;
    cout << "Target " << target2 << " is " << (search(nums2, target2) ? "present" : "not present") << " in the array." << endl;
    return 0;
}
