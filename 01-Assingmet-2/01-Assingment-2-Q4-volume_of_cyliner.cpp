#include <iostream>
using namespace std;

int main() {
    double radius, height;
    const double pi = 3.14159;

    cout << "Enter the radius of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;

    double volume = pi * radius * radius * height;
    cout << "Volume of the cylinder is: " << volume;

    return 0;
}
