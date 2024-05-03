#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string concatenate_with_reverse(string s) {
    string rev_s = s;
    reverse(rev_s.begin(), rev_s.end());
    return s + rev_s;
}

int main() {
    string input_str = "PWSkills";
    cout << concatenate_with_reverse(input_str) << endl;  // Output: "PWSkillssllikSWP"
    return 0;
}
