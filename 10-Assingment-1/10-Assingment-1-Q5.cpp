#include <iostream>
using namespace std;

bool isPerfectSquare(int n) {
    int root = 1;
    while (n > 0) {
        n -= root;
        root += 2;
    }
    return n == 0;
}

int main() {
    int num1 = 36, num2 = 45;
    cout << num1 << " is " << (isPerfectSquare(num1) ? "a valid perfect square" : "not a valid perfect square") << endl;
    cout << num2 << " is " << (isPerfectSquare(num2) ? "a valid perfect square" : "not a valid perfect square") << endl;
    return 0;
}
