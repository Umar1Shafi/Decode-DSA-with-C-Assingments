#include <iostream>
using namespace std;

int main() {
    int n = 4;
    
    // Outer loop for rows
    for (int i = 0; i < n; ++i) {
        // Inner loop for spaces
        for (int j = 0; j < n - i - 1; ++j) {
            cout << "  "; // Print 2 spaces for formatting
        }
        // Inner loop for characters
        char ch = 'A';
        for (int k = 0; k <= i; ++k) {
            cout << ch++;
            if (k < i) cout << " "; // Print a space between characters
        }
        cout << endl;
    }
    
    return 0;
}
