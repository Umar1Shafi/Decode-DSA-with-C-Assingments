#include <iostream>
using namespace std;

int main() {
    int x1, y1, x2, y2, x3, y3;
    cout << "Enter coordinates of three points (x1, y1), (x2, y2), and (x3, y3): ";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    if ((y2 - y1) * (x3 - x2) == (y3 - y2) * (x2 - x1))
        cout << "All 3 points lie on the same line." << endl;
    else
        cout << "All 3 points do not lie on the same line." << endl;
    return 0;
}
