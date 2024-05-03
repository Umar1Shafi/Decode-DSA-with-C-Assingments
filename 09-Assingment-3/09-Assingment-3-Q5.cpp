#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

bool isSorted(vector<int>& arr) {
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

int findK(vector<int>& arr) {
    int low = *min_element(arr.begin(), arr.end());
    int high = *max_element(arr.begin(), arr.end());

    while (low <= high) {
        int mid = low + (high - low) / 2;
        vector<int> temp(arr.size());
        for (int i = 0; i < arr.size(); i++) {
            temp[i] = abs(arr[i] - mid);
        }
        if (isSorted(temp)) {
            return mid;
        } else {
            low = mid + 1;
        }
    }

    return -1;
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9};
    int k = findK(arr);
    if (k != -1) {
        cout << "K: " << k << endl;
    } else {
        cout << "No such K exists" << endl;
    }
    return 0;
}
