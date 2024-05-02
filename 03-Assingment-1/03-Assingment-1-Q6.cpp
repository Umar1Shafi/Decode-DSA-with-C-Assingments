#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int reverseNum = 0, originalNum = number;
    while (number != 0) {
        int digit = number % 10;
        reverseNum = reverseNum * 10 + digit;
        number /= 10;
    }

    int sum = originalNum + reverseNum;
    cout << "Sum of " << originalNum << " and its reverse " << reverseNum << " is " << sum << endl;

    return 0;
}
