#include <iostream>
#include <string>
#include <stack>
using namespace std;

string decimalToBinary(int n) {
    if (n == 0) {
        return "0";
    }
    if (n == 1) {
        return "1";
    }
    return decimalToBinary(n / 2) + to_string(n % 2);
}

int main() {
    int n = 10;
    cout << "Binary representation of " << n << ": " << decimalToBinary(n) << endl;
    return 0;
}
