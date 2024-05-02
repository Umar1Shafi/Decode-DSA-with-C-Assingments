#include <iostream>
using namespace std;

int main() {
    int side1, side2, side3;
    cout << "Enter sides of the triangle: ";
    cin >> side1 >> side2 >> side3;
    if (side1 == side2 && side2 == side3)
        cout << "This is an Equilateral triangle." << endl;
    else if (side1 == side2 || side2 == side3 || side1 == side3)
        cout << "This is an Isosceles triangle." << endl;
    else
        cout << "This is a Scalene triangle." << endl;
    return 0;
}
