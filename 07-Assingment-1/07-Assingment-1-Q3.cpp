#include <iostream>
#include <string>
using namespace std;

bool is_palindrome(string s) {
    int left = 0, right = s.length() - 1;
    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    string input_str = "abcde";
    cout << (is_palindrome(input_str) ? "Yes" : "No") << endl;  // Output: No
    return 0;
}
