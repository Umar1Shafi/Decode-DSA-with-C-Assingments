#include <iostream>
using namespace std;

int reverseNumber(int n, int rev = 0) {
    if (n == 0) {
        return rev;
    }
    return reverseNumber(n / 10, rev * 10 + n % 10);
}

int main() {
    int num = 12345;
    int reversed = reverseNumber(num);
    cout << "Reversed number: " << reversed << endl;
    return 0;
}
