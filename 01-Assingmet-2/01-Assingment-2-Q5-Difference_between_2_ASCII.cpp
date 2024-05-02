#include <iostream>
using namespace std;

int main() {
    char char1, char2;

    cout << "Enter the first character: ";
    cin >> char1;
    cout << "Enter the second character: ";
    cin >> char2;

    int difference = abs(char1 - char2);
    cout << "Difference between ASCII values: " << difference;

    return 0;
}
