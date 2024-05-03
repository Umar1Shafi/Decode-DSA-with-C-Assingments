#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

bool is_vowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int count_vowel_substrings(string s) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        for (int j = i; j < s.length(); j++) {
            string sub = s.substr(i, j - i + 1);
            bool has_vowels_only = true;
            for (char c : sub) {
                if (!is_vowel(tolower(c))) {
                    has_vowels_only = false;
                    break;
                }
            }
            if (has_vowels_only) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    string input_str = "abjkoe";
    cout << count_vowel_substrings(input_str) << endl;  // Output: 4
    return 0;
}
