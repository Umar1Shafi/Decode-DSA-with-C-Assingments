#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {10, 5, 20, 15, 30};
    int largest = INT_MIN, secondLargest = INT_MIN;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    cout << "Second largest element: " << secondLargest << endl;

    return 0;
}
