#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& nums, int left, int mid, int right) {
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
        if (L[i] >= R[j]) {
            nums[k++] = L[i++];
        } else {
            nums[k++] = R[j++];
        }
    }

    while (i < n1) {
        nums[k++] = L[i++];
    }

    while (j < n2) {
        nums[k++] = R[j++];
    }
}

void mergeSort(vector<int>& nums, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(nums, left, mid);
        mergeSort(nums, mid + 1, right);

        merge(nums, left, mid, right);
    }
}

void sortDescending(vector<int>& nums) {
    mergeSort(nums, 0, nums.size() - 1);
}

int main() {
    vector<int> nums = {5, 2, 7, 1, 9, 3};
    cout << "Original array:" << endl;
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    sortDescending(nums);
    
    cout << "Array sorted in descending order:" << endl;
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
