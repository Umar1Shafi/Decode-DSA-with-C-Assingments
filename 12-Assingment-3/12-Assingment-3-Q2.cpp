#include <iostream>
#include <vector>

using namespace std;

vector<int> findErrorNums(vector<int>& nums) {
    vector<int> result;
    int n = nums.size();
    for (int i = 0; i < n; ++i) {
        int index = abs(nums[i]) - 1;
        if (nums[index] < 0) {
            result.push_back(index + 1); // Number that occurs twice
        } else {
            nums[index] = -nums[index];
        }
    }
    for (int i = 0; i < n; ++i) {
        if (nums[i] > 0) {
            result.push_back(i + 1); // Missing number
            break;
        }
    }
    return result;
}

int main() {
    vector<int> nums1 = {1, 2, 2, 4};
    vector<int> errorNums = findErrorNums(nums1);
    cout << "Error Numbers: ";
    for (int num : errorNums) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> nums2 = {1, 1};
    errorNums = findErrorNums(nums2);
    cout << "Error Numbers: ";
    for (int num : errorNums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
