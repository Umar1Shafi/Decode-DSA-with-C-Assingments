#include <iostream>
#include <vector>
using namespace std;

void printIncreasingSequences(int n, int k, vector<int>& sequence) {
    if (sequence.size() == k) {
        for (int num : sequence) {
            cout << num << " ";
        }
        cout << endl;
        return;
    }
    for (int i = (sequence.empty() ? 1 : sequence.back() + 1); i <= n; i++) {
        sequence.push_back(i);
        printIncreasingSequences(n, k, sequence);
        sequence.pop_back();
    }
}

int main() {
    int n = 5;
    int k = 3;
    vector<int> sequence;
    cout << "Increasing sequences of length " << k << " from 1 to " << n << ":" << endl;
    printIncreasingSequences(n, k, sequence);
    return 0;
}
