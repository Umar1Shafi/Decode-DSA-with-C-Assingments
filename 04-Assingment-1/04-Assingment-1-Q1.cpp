#include <iostream>
using namespace std;

void printSquares(int n) {
    for (int i = 1; i <= n; ++i) {
        cout << i * i << " ";
    }
}

int main() {
    int n = 5; // Example value for n
    printSquares(n);
    return 0;
}
