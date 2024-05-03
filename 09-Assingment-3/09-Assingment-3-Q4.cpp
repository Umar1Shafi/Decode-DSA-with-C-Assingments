#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int minOperationsToSort(vector<int>& arr) {
    unordered_map<int, int> freq;
    for (int num : arr) {
        freq[num]++;
    }
    int maxFreq = 0;
    for (auto it : freq) {
        maxFreq = max(maxFreq, it.second);
    }
    return arr.size() - maxFreq;
}

int main() {
    vector<int> arr = {3, 1, 4, 2, 5};
    cout << "Minimum operations required to sort the array: " << minOperationsToSort(arr) << endl;
    return 0;
}
