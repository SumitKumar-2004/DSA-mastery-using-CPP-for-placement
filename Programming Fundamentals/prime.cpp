// 5. Write a program to check if a number is prime.
#include <iostream>
using namespace std;
int main()
{
   int n = 18;
   bool isPrime = true;
   if (n <= 1)
   {
      isPrime = false;
   }
   else
   {
      for (int i = 2; i * i <= n; i++)
      {
         if (n % i == 0)
         {
            isPrime = false;
            break;
         }
      }
   }
   if (isPrime)
   {
      cout << n << " is a prime number";
   }
   else
   {
      cout << n << " is not a prime number";
   }
}
// Time complexity: O(√n)
// Space complexity: O(1)
