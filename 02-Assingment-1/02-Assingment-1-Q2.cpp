#include <iostream>
using namespace std;

int main() {
    double radius;
    cout << "Enter radius of the circle: ";
    cin >> radius;
    double area = 3.14 * radius * radius;
    double circumference = 2 * 3.14 * radius;
    if (area > circumference)
        cout << "Area is greater than circumference." << endl;
    else
        cout << "Area is not greater than circumference." << endl;
    return 0;
}
