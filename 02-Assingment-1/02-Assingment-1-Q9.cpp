#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter any character: ";
    cin >> ch;
    if (isalpha(ch))
        cout << "Alphabet" << endl;
    else if (isdigit(ch))
        cout << "Digit" << endl;
    else
        cout << "Special Character" << endl;
    return 0;
}
