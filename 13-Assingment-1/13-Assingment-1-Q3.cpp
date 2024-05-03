#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> scoreOfPrefixes(vector<int>& nums) {
    int n = nums.size();
    vector<int> maxSoFar(n);
    maxSoFar[0] = nums[0];
    for (int i = 1; i < n; ++i) {
        maxSoFar[i] = max(maxSoFar[i - 1], nums[i]);
    }
    vector<int> ans(n);
    ans[0] = nums[0];
    for (int i = 1; i < n; ++i) {
        ans[i] = nums[i] + maxSoFar[i - 1];
    }
    return ans;
}

int main() {
    vector<int> nums1 = {2, 3, 7, 5, 10};
    vector<int> ans1 = scoreOfPrefixes(nums1);
    cout << "Output: ";
    for (int num : ans1) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> nums2 = {1, 1, 2, 4, 8, 16};
    vector<int> ans2 = scoreOfPrefixes(nums2);
    cout << "Output: ";
    for (int num : ans2) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
