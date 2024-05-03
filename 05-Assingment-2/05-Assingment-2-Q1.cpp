#include <iostream>
using namespace std;

int countElementsGreaterThanX(int arr[], int n, int x) {
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] > x) {
            ++count;
        }
    }
    return count;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int x = 5;
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = countElementsGreaterThanX(arr, n, x);
    cout << "Number of elements strictly greater than " << x << ": " << count << endl;
    return 0;
}
