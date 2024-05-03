#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void generatePowerSet(const vector<int>& nums, int idx, vector<int>& subset, vector<vector<int>>& result) {
    result.push_back(subset);
    for (int i = idx; i < nums.size(); i++) {
        if (i == idx || nums[i] != nums[i - 1]) {
            subset.push_back(nums[i]);
            generatePowerSet(nums, i + 1, subset, result);
            subset.pop_back();
        }
    }
}

vector<vector<int>> powerSet(const vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> subset;
    sort(nums.begin(), nums.end());
    generatePowerSet(nums, 0, subset, result);
    return result;
}

int main() {
    vector<int> nums = {1, 2, 2};
    vector<vector<int>> subsets = powerSet(nums);
    cout << "Power set of {1, 2, 2}:" << endl;
    for (auto subset : subsets) {
        cout << "[ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }
    return 0;
}
