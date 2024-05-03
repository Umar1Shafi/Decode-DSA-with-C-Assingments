#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string lexicographically_max_word(string s) {
    stringstream ss(s);
    string word, max_word = "";
    while (ss >> word) {
        if (word > max_word) {
            max_word = word;
        }
    }
    return max_word;
}

int main() {
    string input_str = "proud to be pwians";
    cout << lexicographically_max_word(input_str) << endl;  // Output: pwians
    input_str = "decode dsa with pw";
    cout << lexicographically_max_word(input_str) << endl;  // Output: with
    return 0;
}
