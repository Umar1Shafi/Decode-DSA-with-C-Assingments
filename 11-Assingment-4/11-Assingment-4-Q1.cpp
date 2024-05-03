#include <iostream>
#include <vector>
using namespace std;

void generatePowerSet(const vector<int>& nums, int idx, vector<int>& subset, vector<vector<int>>& result) {
    if (idx == nums.size()) {
        result.push_back(subset);
        return;
    }
    subset.push_back(nums[idx]);
    generatePowerSet(nums, idx + 1, subset, result);
    subset.pop_back();
    generatePowerSet(nums, idx + 1, subset, result);
}

vector<vector<int>> powerSet(const vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> subset;
    generatePowerSet(nums, 0, subset, result);
    return result;
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> subsets = powerSet(nums);
    cout << "Power set of {1, 2, 3}:" << endl;
    for (auto subset : subsets) {
        cout << "[ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }
    return 0;
}
