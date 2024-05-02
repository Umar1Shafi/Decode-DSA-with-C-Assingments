#include <iostream>
using namespace std;

int main() {
    int n = 4;
    
    // Outer loop for rows
    for (int i = 0; i < n; ++i) {
        // Inner loop for spaces
        for (int j = 0; j < n - i - 1; ++j) {
            cout << " "; // Print spaces
        }
        // Inner loop for stars
        for (int k = 0; k < n; ++k) {
            cout << "*"; // Print stars
        }
        cout << endl;
    }
    
    return 0;
}
