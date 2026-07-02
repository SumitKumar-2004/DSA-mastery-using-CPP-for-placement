#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
   while (b != 0)
   {
      int temp = b;
      b = a % b;
      a = temp;
   }
   return a;
}

int main()
{
   int a = 1, b = 2;
   int c = 3, d = 4;

   // find numerator
   int num = (a * d) + (b * c);
   // find denominator
   int deno = (b * d);
   int hcf = gcd(num, deno);

   num = num / hcf;
   deno =deno / hcf;
   cout << "Sum = " << num << "/" << deno;
}