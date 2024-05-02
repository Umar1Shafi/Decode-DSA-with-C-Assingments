#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int prev = 0, curr = 1;
    cout << prev << " " << curr << " ";
    for (int i = 2; i < n; ++i) {
        int next = prev + curr;
        cout << next << " ";
        prev = curr;
        curr = next;
    }

    return 0;
}
