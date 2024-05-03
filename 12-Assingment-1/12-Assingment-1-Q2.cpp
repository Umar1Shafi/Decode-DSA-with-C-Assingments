#include <iostream>
#include <vector>
using namespace std;

int merge(vector<int>& nums, int left, int mid, int right) {
    int count = 0;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++) {
        L[i] = nums[left + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = nums[mid + 1 + j];
    }

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            nums[k++] = L[i++];
        } else {
            nums[k++] = R[j++];
            count += (n1 - i); // Counting reverse pairs
        }
    }

    while (i < n1) {
        nums[k++] = L[i++];
    }

    while (j < n2) {
        nums[k++] = R[j++];
    }

    return count;
}

int mergeSort(vector<int>& nums, int left, int right) {
    int count = 0;
    if (left < right) {
        int mid = left + (right - left) / 2;

        count += mergeSort(nums, left, mid);
        count += mergeSort(nums, mid + 1, right);

        count += merge(nums, left, mid, right);
    }
    return count;
}

int reversePairs(vector<int>& nums) {
    return mergeSort(nums, 0, nums.size() - 1);
}

int main() {
    vector<int> nums = {2, 4, 3, 5, 1};
    cout << "Number of reverse pairs: " << reversePairs(nums) << endl;
    return 0;
}
