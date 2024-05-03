#include <iostream>
using namespace std;

// Function to calculate the sum of odd numbers between a and b using recursion
int sumOfOdd(int a, int b) {
    if (a > b) {
        return 0;
    } else if (a % 2 == 0) {
        return sumOfOdd(a + 1, b);
    } else {
        return a + sumOfOdd(a + 2, b);
    }
}

int main() {
    int a = 3, b = 10;
    cout << "Sum of odd numbers between " << a << " and " << b << ": " << sumOfOdd(a, b) << endl;
    return 0;
}
