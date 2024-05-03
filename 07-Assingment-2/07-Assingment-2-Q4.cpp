#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool are_anagrams(string s, string t) {
    if (s.length() != t.length()) {
        return false;
    }
    unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }
    for (char c : t) {
        if (freq.find(c) == freq.end() || --freq[c] < 0) {
            return false;
        }
    }
    return true;
}

int main() {
    string s1 = "car", t1 = "arc";
    string s2 = "book", t2 = "hook";
    cout << boolalpha << are_anagrams(s1, t1) << endl;  // Output: true
    cout << boolalpha << are_anagrams(s2, t2) << endl;  // Output: false
    return 0;
}
