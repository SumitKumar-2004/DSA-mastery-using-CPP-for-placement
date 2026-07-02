#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n)
{
    int original = n;
    int rev = 0;

    while (n > 0)
    {
        int rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    return rev == original;
}

int main()
{
    int min = 10;
    int max = 50;

    for (int i = min; i <= max; i++)
    {
        if (isPalindrome(i))
        {
            cout << i << " ";
        }
    }
}