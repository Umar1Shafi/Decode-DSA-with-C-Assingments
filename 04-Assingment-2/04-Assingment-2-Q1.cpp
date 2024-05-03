#include <iostream>
using namespace std;

int main() {
    int num1 = 5, num2 = 10;
    int *ptr1 = &num1;
    int *ptr2 = &num2;

    int product = (*ptr1) * (*ptr2);
    cout << "Product: " << product << endl;

    return 0;
}
