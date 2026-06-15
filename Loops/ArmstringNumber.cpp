#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n, sum = 0;
   cout << "Enter a num : ";
   cin >> n;
   int original = n;
   while (n > 0)
   {
      int digit = n % 10;
      sum += digit * digit * digit;
      n /= 10;
   }
   if (original == sum)
   {
      cout << "Armstrong number";
   }
   else
   {
      cout << "Not Armstrong number";
   }
}