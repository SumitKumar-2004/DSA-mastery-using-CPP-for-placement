// Toggle the ith bit.
// If the ith bit is 0, make it 1.
// If the ith bit is 1, make it 0.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 9;      // Binary: 1001
    int ith = 1;    // Toggle the 1st bit

    // Create a mask with only the ith bit set.
    // 1 << 1 = 0010

    // XOR with the mask.
    // 1001 ^ 0010 = 1011

    n = n ^ (1 << ith);

    cout << n;      // Output: 11
}