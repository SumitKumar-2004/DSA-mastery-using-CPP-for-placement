/*
0 - 300000        -> 0%
300001 - 600000  -> 5%
600001 - 900000  -> 10%
Above 900000     -> 20%
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
   double income;
   double tax = 0;
   cout << "Enter income : ";
   cin >> income;
   // Above 9lakh -> 20% tax
   if (income >= 900000)
   {
      tax += (income - 900000) * 0.20;
      income = 900000;
      // 6 lakh to 9 lakh -> 10%
   }
   else if (income >= 600000)
   {
      tax += (income - 600000) * 0.10;
      income = 600000;
      // 3 lakh to 6 lakh -> 5%
   }
   else if (income >= 300000)
   {
      tax += (income - 300000) * 0.05;
      income = 300000;
   }
   // First 3 lakh -> 0%
   cout << "Tax : " << tax;
   return 0;
}