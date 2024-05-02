#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (a > b)
        cout << "first number " << a << " is the largest.";
    else
        cout << "second number " << b << " is the largest.";
    cout << endl;
    return 0;
}
