#include <iostream>
#include <vector>
using namespace std;

int countOnes(vector<int>& arr) {
    int count = 0;
    for (int num : arr) {
        if (num == 1) {
            count++;
        }
    }
    return count;
}

int main() {
    vector<int> arr = {0, 0, 0, 0, 1, 1};
    int totalCount = countOnes(arr);
    cout << "Total number of 1's: " << totalCount << endl;
    return 0;
}
