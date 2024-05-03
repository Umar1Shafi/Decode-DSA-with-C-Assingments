#include <iostream>
#include <string>
using namespace std;

int string_to_integer(string s) {
    int result = 0;
    for (char c : s) {
        result = result * 10 + (c - '0');
    }
    return result;
}

int main() {
    string input_str = "3244";
    cout << string_to_integer(input_str) << endl;  // Output: 3244
    return 0;
}
