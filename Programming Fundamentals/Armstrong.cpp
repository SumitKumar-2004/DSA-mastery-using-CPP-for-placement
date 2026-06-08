#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n = 153;
   int k = to_string(n).length();
   int sum = 0;
   int original = n;

   while (n > 0)
   {
      int ld = n % 10;
      
      int power = 1;
      for (int i = 0; i < k; i++)
      {
         power *= ld;
      }

      sum += power;
      n /= 10;
   }

   if (sum == original)
      cout << "Armstrong Number";
   else
      cout << "Not Armstrong Number";

   return 0;
}