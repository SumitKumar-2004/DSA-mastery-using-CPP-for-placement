#include <iostream>
using namespace std;
int main() {
    int units;
    double bill = 0;
    cout<<"Enter units : ";
    cin >> units;
    if (units > 500) {
        bill += (units - 500) * 8;
        units = 500;
    }

    if (units > 200) {
        bill += (units - 200) * 6;
        units = 200;
    }

    if (units > 100) {
        bill += (units - 100) * 4;
        units = 100;
    }

    bill += units * 2;

    cout << "Bill = " << bill;

    return 0;
}