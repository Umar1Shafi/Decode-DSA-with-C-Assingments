#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void findSwappedElements(vector<int>& arr) {
    int first = -1, second = -1;
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            if (first == -1) {
                first = i;
            } else {
                second = i + 1;
                break;
            }
        }
    }
    if (second == -1) {
        // No elements were swapped
        return;
    }
    swap(arr[first], arr[second]);
}

int main() {
    vector<int> arr = {3, 8, 6, 7, 5, 9, 10};
    cout << "Original array:" << endl;
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    findSwappedElements(arr);
    quickSort(arr, 0, arr.size() - 1);

    cout << "Sorted array after fixing the swapped elements:" << endl;
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
