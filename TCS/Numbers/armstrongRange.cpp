#include <bits/stdc++.h>
using namespace std;

// Static method to check if a number is an Armstrong number
static bool isArmstrong(int num)
{
   int k = to_string(num).length(); // Get number of digits
   int sum = 0;
   int n = num;

   while (n > 0)
   {
      int ld = n % 10;   // Get last digit
      sum += round(pow(ld, k)); // Add ld^k to sum
      n /= 10;           // Remove last digit
   }

   return sum == num; // Return true if sum equals original number
}

int main()
{
   int min = 1;
   int max = 500;
   for (int i = min; i <= max; i++)
   {
      if(isArmstrong(i)){
         cout<<i<<" ";
      }
   }
   

   return 0;
}
