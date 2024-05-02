#include <iostream>
using namespace std;

int main() {
    for (int num = 1; num <= 500; ++num) {
        int sum = 0, originalNum = num;
        while (originalNum != 0) {
            int digit = originalNum % 10;
            sum += digit * digit * digit;
            originalNum /= 10;
        }
        if (sum == num) {
            cout << num << endl;
        }
    }
    return 0;
}
