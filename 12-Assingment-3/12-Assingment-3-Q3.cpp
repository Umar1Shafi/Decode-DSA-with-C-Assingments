#include <iostream>
#include <vector>

using namespace std;

vector<int> findDuplicates(vector<int>& nums) {
    vector<int> result;
    int n = nums.size();
    for (int i = 0; i < n; ++i) {
        int index = abs(nums[i]) - 1;
        if (nums[index] < 0) {
            result.push_back(index + 1);
        } else {
            nums[index] = -nums[index];
        }
    }
    return result;
}

int main() {
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> duplicates = findDuplicates(nums);
    cout << "Duplicates: ";
    for (int num : duplicates) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> nums2 = {1, 1, 2};
    duplicates = findDuplicates(nums2);
    cout << "Duplicates: ";
    for (int num : duplicates) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> nums3 = {1};
    duplicates = findDuplicates(nums3);
    cout << "Duplicates: ";
    for (int num : duplicates) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
