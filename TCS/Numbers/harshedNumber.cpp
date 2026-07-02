// Harshad (Niven) Number
// A number is Harshad if it is divisible by the sum of its digits.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 378;

    // Save the original number
    int temp = num;

    int sum = 0;

    // Find the sum of digits
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }

    // Check divisibility using the original number
    if (temp % sum == 0)
    {
        cout << "Harshad Number";
    }
    else
    {
        cout << "Not a Harshad Number";
    }

    return 0;
}