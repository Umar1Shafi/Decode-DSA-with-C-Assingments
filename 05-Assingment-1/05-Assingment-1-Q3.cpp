#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {10, 5, 20, 15, 30};
    int minimum = INT_MAX;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        if (arr[i] < minimum) {
            minimum = arr[i];
        }
    }

    cout << "Minimum value: " << minimum << endl;

    return 0;
}
