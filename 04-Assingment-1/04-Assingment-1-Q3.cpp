#include <iostream>
using namespace std;

void printOddNumbers(int a, int b) {
    for (int i = a; i <= b; ++i) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
}

int main() {
    int a = 3, b = 10; // Example values for a and b
    printOddNumbers(a, b);
    return 0;
}
