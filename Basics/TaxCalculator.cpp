// Income tax calculator
//  Income <= 300000        -> 0% Tax
//  300001 - 600000        -> 5% Tax
//  600001 - 900000        -> 10% Tax
//  Above 900000           -> 20% Tax
#include <bits/stdc++.h>
using namespace std;
int main()
{
   double income, tax;
   cout<<"Enter the income : ";
   cin >> income;

   if (income <= 300000)
   {
      tax = 0;
   }
   else if (income <= 600000)
   {
      tax = income * 0.05;
   }
   else if (income <= 900000)
   {
      tax = income * 0.10;
   }
   else
   {
      tax = income * 0.20;
   }
   cout << "Tax = " << tax;
   return 0;
}