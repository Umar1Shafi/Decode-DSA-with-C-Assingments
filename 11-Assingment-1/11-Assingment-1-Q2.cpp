#include <iostream>
using namespace std;

// Function to calculate the number of ways to climb n stairs using recursion
int climbStairs(int n) {
    if (n <= 1) {
        return 1;
    } else if (n == 2) {
        return 2;
    } else {
        return climbStairs(n - 1) + climbStairs(n - 2) + climbStairs(n - 3);
    }
}

int main() {
    int n = 4;
    cout << "Number of ways to climb " << n << " stairs: " << climbStairs(n) << endl;
    return 0;
}
