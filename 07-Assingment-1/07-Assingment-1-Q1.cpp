#include <iostream>
#include <string>
using namespace std;

string update_odd_positions(string s) {
    string updated_string = "";
    for (int i = 0; i < s.length(); i++) {
        if (i % 2 != 0) {
            updated_string += '#';
        } else {
            updated_string += s[i];
        }
    }
    return updated_string;
}

int main() {
    string input_str = "Pbwcshkuiglhlds";
    cout << update_odd_positions(input_str) << endl;  // Output: "P#w#s#k#i#l#l#s"
    return 0;
}
