#include <iostream>
#include <vector>

using namespace std;

class NumArray {
private:
    vector<int> prefixSum;

public:
    NumArray(vector<int>& nums) {
        int n = nums.size();
        prefixSum.resize(n + 1);
        prefixSum[0] = 0;
        for (int i = 0; i < n; ++i) {
            prefixSum[i + 1] = prefixSum[i] + nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        return prefixSum[right + 1] - prefixSum[left];
    }
};

int main() {
    vector<int> nums = {-2, 0, 3, -5, 2, -1};
    NumArray numArray(nums);
    cout << numArray.sumRange(0, 2) << endl; // return (-2) + 0 + 3 = 1
    cout << numArray.sumRange(2, 5) << endl; // return 3 + (-5) + 2 + (-1) = -1
    cout << numArray.sumRange(0, 5) << endl; // return (-2) + 0 + 3 + (-5) + 2 + (-1) = -3
    return 0;
}
