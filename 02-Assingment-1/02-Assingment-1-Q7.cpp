#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter coordinates (x, y): ";
    cin >> x >> y;
    if (x == 0 && y == 0)
        cout << "the point lies at the origin." << endl;
    else if (x == 0)
        cout << "the point lies on the y-axis." << endl;
    else if (y == 0)
        cout << "the point lies on the x-axis." << endl;
    else
        cout << "the point does not lie on x or y axis." << endl;
    return 0;
}
