#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n, rev=0;
   cout << "Enter a num : ";
   cin >> n;
   while (n > 0)
   {
      int digit = n % 10;
      rev  = rev * 10 + digit;
      n /= 10;
   }
   cout << "Rev of digit is :" << rev;
}