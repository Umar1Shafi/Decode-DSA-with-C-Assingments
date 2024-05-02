#include <iostream>
using namespace std;

int main() {
    int n = 4;
    for (int i = 1; i <= 2 * n - 1; ++i) {
        int k = (i <= n) ? i : 2 * n - i;
        for (int j = 1; j <= k; ++j) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
