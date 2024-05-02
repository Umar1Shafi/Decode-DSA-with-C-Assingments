#include <iostream>
#include <cmath>
using namespace std;

int countDigits(int number) {
    int count = 0;
    while (number != 0) {
        number /= 10;
        ++count;
    }
    return count;
}

int main() {
    int number = 12345; // Example value for the number
    int digitCount = countDigits(number);
    cout << "Square of the number of digits: " << pow(digitCount, 2);
    return 0;
}
