#include <bits/stdc++.h>
using namespace std;
int main()
{
   int a, b;
   cin >> a >> b;
   int n1 = a;
   int n2 = b;
   // Find GCD
   while (n1 > 0 && n2 > 0)
   {
      if (n1 > n2)
         n1 %= n2;
      else
         n2 %= n1;
   }
   int gcd;
   if (n1 == 0)
      gcd = n2;
   else
      gcd = n1;
   int lcm = (a * b) / gcd;
   cout << "LCM = " << lcm;
   return 0;
}