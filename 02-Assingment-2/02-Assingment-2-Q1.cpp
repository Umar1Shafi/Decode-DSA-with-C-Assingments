#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;

    int notes500 = 0, notes100 = 0, notes50 = 0, notes10 = 0, notes5 = 0, notes1 = 0;

    while (amount > 0) {
        switch (amount) {
            case 500:
                notes500++;
                amount -= 500;
                break;
            case 100:
                notes100++;
                amount -= 100;
                break;
            case 50:
                notes50++;
                amount -= 50;
                break;
            case 10:
                notes10++;
                amount -= 10;
                break;
            case 5:
                notes5++;
                amount -= 5;
                break;
            default:
                notes1 += amount;
                amount = 0;
                break;
        }
    }

    cout << "Notes of \"500\" = " << notes500 << " and notes of \"100\" = " << notes100 << " and notes of \"50\" = " << notes50 << " and notes of \"10\" = " << notes10 << " and notes of \"5\" = " << notes5 << " and notes of \"1\" = " << notes1 << endl;

    return 0;
}
