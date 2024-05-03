#include <iostream>
#include <vector>

using namespace std;

vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
    vector<int> seats(n);
    for (vector<int>& booking : bookings) {
        int first = booking[0] - 1;
        int last = booking[1] - 1;
        int seatsCount = booking[2];
        seats[first] += seatsCount;
        if (last + 1 < n) {
            seats[last + 1] -= seatsCount;
        }
    }
    for (int i = 1; i < n; ++i) {
        seats[i] += seats[i - 1];
    }
    return seats;
}

int main() {
    vector<vector<int>> bookings1 = {{1, 2, 10}, {2, 3, 20}, {2, 5, 25}};
    int n1 = 5;
    vector<int> answer1 = corpFlightBookings(bookings1, n1);
    cout << "Output: ";
    for (int seats : answer1) {
        cout << seats << " ";
    }
    cout << endl;

    vector<vector<int>> bookings2 = {{1, 2, 10}, {2, 2, 15}};
    int n2 = 2;
    vector<int> answer2 = corpFlightBookings(bookings2, n2);
    cout << "Output: ";
    for (int seats : answer2) {
        cout << seats << " ";
    }
    cout << endl;

    return 0;
}
