#include <iostream>
using namespace std;

// Function to check if a number is a power of 2 using recursion
bool isPowerOfTwo(int n) {
    if (n == 1) {
        return true;
    } else if (n % 2 == 1 || n == 0) {
        return false;
    } else {
        return isPowerOfTwo(n / 2);
    }
}

int main() {
    int n = 16;
    cout << n << " is " << (isPowerOfTwo(n) ? "a" : "not a") << " power of 2." << endl;
    return 0;
}
