#include <iostream>
using namespace std;

int main() {
    int n = 4;
    
    // Outer loop for rows
    for (int i = 0; i < n; ++i) {
        // Inner loop for numbers
        if (i % 2 == 0) {
            for (int j = 1; j <= i + 1; ++j) {
                cout << j << " "; // Print numbers
            }
        } else {
            // Inner loop for characters
            char ch = 'A';
            for (int k = 0; k <= i; ++k) {
                cout << ch++ << " "; // Print characters
            }
        }
        cout << endl;
    }
    
    return 0;
}
