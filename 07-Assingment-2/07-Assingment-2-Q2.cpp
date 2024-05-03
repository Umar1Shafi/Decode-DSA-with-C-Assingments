#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

char second_largest_digit(string s) {
    sort(s.begin(), s.end(), greater<char>());
    int count = 0;
    char second_largest = '0';
    for (char c : s) {
        if (isdigit(c)) {
            count++;
            if (count == 2) {
                second_largest = c;
                break;
            }
        }
    }
    return second_largest;
}

int main() {
    string input_str = "2947578";
    cout << second_largest_digit(input_str) << endl;  // Output: '8'
    return 0;
}
