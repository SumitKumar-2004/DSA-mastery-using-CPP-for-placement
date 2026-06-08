// 6. Write a program to find the sum of digits of a number.

#include <iostream>
using namespace std;
int main()
{
   int n = 120, sum = 0;
   while (n > 0)
   {
      int digit = n % 10;
      sum += digit;
      n /= 10;
   }

   cout << "Sum of digits is : " << sum;
}
// Time complexity : O(log₁₀(n))
// Space complexity : O(1)
