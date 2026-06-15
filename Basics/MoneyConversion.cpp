#include <bits/stdc++.h>
using namespace std;

int main()
{
    int amount;
    cout << "Enter Amount: ";
    cin >> amount;

    int n500 = amount / 500;
    amount %= 500;

    int n200 = amount / 200;
    amount %= 200;

    int n100 = amount / 100;
    amount %= 100;

    int n50 = amount / 50;
    amount %= 50;

    int n20 = amount / 20;
    amount %= 20;

    int n10 = amount / 10;
    amount %= 10;

    int n5 = amount / 5;
    amount %= 5;

    int n2 = amount / 2;
    amount %= 2;

    int n1 = amount;

    cout << "500 : " << n500 << endl;
    cout << "200 : " << n200 << endl;
    cout << "100 : " << n100 << endl;
    cout << "50  : " << n50 << endl;
    cout << "20  : " << n20 << endl;
    cout << "10  : " << n10 << endl;
    cout << "5   : " << n5 << endl;
    cout << "2   : " << n2 << endl;
    cout << "1   : " << n1 << endl;

    return 0;
}