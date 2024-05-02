#include <iostream>
using namespace std;

int main() {
    int length, breadth;
    cout << "Enter length and breadth of the rectangle: ";
    cin >> length >> breadth;
    int rectangle_area = length * breadth;
    int rectangle_perimeter = 2 * (length + breadth);
    if (rectangle_area > rectangle_perimeter)
        cout << "Area is greater than perimeter." << endl;
    else
        cout << "Area is not greater than perimeter." << endl;
    return 0;
}
