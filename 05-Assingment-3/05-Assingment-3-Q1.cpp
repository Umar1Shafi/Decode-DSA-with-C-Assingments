#include <iostream>
#include <algorithm>
using namespace std;

int countTripletsWithSum(int arr[], int n, int x) {
    int count = 0;
    sort(arr, arr + n);

    for (int i = 0; i < n - 2; i++) {
        int left = i + 1, right = n - 1;
        while (left < right) {
            int sum = arr[i] + arr[left] + arr[right];
            if (sum == x) {
                count++;
                left++;
                right--;
            } else if (sum < x) {
                left++;
            } else {
                right--;
            }
        }
    }

    return count;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 12;

    int count = countTripletsWithSum(arr, n, x);
    cout << "Number of triplets with sum " << x << ": " << count << endl;

    return 0;
}
