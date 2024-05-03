#include <iostream>
#include <algorithm>
using namespace std;

void findLargestThreeElements(int arr[], int n) {
    sort(arr, arr + n, greater<int>());
    cout << "Largest three elements: ";
    for (int i = 0; i < min(3, n); ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int n = sizeof(arr) / sizeof(arr[0]);
    findLargestThreeElements(arr, n);
    return 0;
}
