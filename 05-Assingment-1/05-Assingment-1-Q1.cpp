#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int product = 1;
    
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        product *= arr[i];
    }
    
    cout << "Product of all elements: " << product << endl;

    return 0;
}
