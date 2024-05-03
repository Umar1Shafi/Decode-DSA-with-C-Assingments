#include <iostream>
using namespace std;

int arrangeCoins(int n) {
    long long left = 0, right = n;
    while (left <= right) {
        long long mid = left + (right - left) / 2;
        long long currStairs = (mid * (mid + 1)) / 2;
        if (currStairs == n) {
            return mid;
        } else if (currStairs < n) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return right;
}

int main() {
    int coins1 = 5, coins2 = 8;
    cout << "Number of complete rows for " << coins1 << " coins: " << arrangeCoins(coins1) << endl;
    cout << "Number of complete rows for " << coins2 << " coins: " << arrangeCoins(coins2) << endl;
    return 0;
}
