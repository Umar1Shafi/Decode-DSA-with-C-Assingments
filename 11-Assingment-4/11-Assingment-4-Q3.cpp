#include <iostream>
#include <vector>
using namespace std;

int longestCommonSubstring(string text1, string text2, int m, int n, int count) {
    if (m == 0 || n == 0) {
        return count;
    }
    if (text1[m - 1] == text2[n - 1]) {
        count = longestCommonSubstring(text1, text2, m - 1, n - 1, count + 1);
    }
    count = max(count, max(longestCommonSubstring(text1, text2, m, n - 1, 0), longestCommonSubstring(text1, text2, m - 1, n, 0)));
    return count;
}

int main() {
    string text1 = "abcdef";
    string text2 = "bcd";
    int m = text1.size();
    int n = text2.size();
    cout << "Length of the longest common substring: " << longestCommonSubstring(text1, text2, m, n, 0) << endl;
    return 0;
}
