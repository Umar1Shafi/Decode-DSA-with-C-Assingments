#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string reverse_second_half(string s) {
    int half_length = s.length() / 2;
    string first_half = s.substr(0, half_length);
    string second_half = s.substr(half_length);
    reverse(second_half.begin(), second_half.end());
    return first_half + second_half;
}

int main() {
    string input_str = "abcdefgh";
    cout << reverse_second_half(input_str) << endl;  // Output: abcdhgfe
    return 0;
}
