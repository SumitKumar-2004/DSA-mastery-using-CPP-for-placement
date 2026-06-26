// Clear the ith bit.
// If the ith bit is already 0, leave it unchanged.
// Otherwise, make the ith bit 0.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 9;      // Binary: 1001
    int ith = 1;    // Clear the 1st bit

    // Create a mask with only the ith bit set.
    // 1 << 1 = 0010

    // Take NOT of the mask.
    // ~(0010) = 1101

    // AND with the number.
    // 1001 & 1101 = 1001

    n = n & ~(1 << ith);

    cout << n;      // Output: 9
}