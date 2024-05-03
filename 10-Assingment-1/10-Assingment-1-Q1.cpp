#include <iostream>
#include <vector>
using namespace std;

int lastOccurrence(vector<int>& arr, int x) {
    int left = 0, right = arr.size() - 1, result = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x) {
            result = mid;
            left = mid + 1;
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return result;
}

int main() {
    vector<int> arr = {1, 2, 3, 3, 4, 4, 4, 5};
    int x = 4;
    int lastIndex = lastOccurrence(arr, x);
    cout << "Last occurrence of " << x << " is at index: " << lastIndex << endl;
    return 0;
}
