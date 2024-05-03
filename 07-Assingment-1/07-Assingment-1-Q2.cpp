#include <iostream>
#include <string>
using namespace std;

int count_consonants(string s) {
    string consonants = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
    int count = 0;
    for (char c : s) {
        if (consonants.find(c) != string::npos) {
            count++;
        }
    }
    return count;
}

int main() {
    string input_str = "pwians";
    cout << count_consonants(input_str) << endl;  // Output: 4
    return 0;
}
