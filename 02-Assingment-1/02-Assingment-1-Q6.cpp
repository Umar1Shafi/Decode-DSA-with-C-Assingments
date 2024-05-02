#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cout << "Enter marks of A, B, and C: ";
    cin >> A >> B >> C;
    if (A < B && A < C)
        cout << "‘A’ has the least marks." << endl;
    else if (B < A && B < C)
        cout << "‘B’ has the least marks." << endl;
    else
        cout << "‘C’ has the least marks." << endl;
    return 0;
}
