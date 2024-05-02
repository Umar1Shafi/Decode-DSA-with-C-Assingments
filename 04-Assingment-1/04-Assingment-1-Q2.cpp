#include <iostream>
using namespace std;

double circleArea(double radius) {
    return 3.14 * radius * radius;
}

int main() {
    double radius = 5.0; // Example value for radius
    cout << "Area of the circle: " << circleArea(radius);
    return 0;
}
