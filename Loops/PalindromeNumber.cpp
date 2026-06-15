#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n, rev = 0;
   cout << "Enter a num : ";
   cin >> n;
   int original = n;
   while (n > 0)
   {
      int digit = n % 10;
      rev = rev * 10 + digit;
      n /= 10;
   }
   if (rev == original)
   {
      cout << original << " is a palindrome";
   }
   else
   {
      cout << original << " is not a palindrome";
   }
}