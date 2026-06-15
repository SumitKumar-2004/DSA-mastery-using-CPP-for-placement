#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   int sum = 0;
   cout << "Enter n : ";
   cin >> n;

   for (int i = 1; i < n; i++)
   {
      if (n % i == 0)
      {
         sum += i;
      }
   }
   if (sum == n)
   {
      cout << "Perfect Number";
   }
   else
   {
      cout << "Not a perfect number";
   }
}