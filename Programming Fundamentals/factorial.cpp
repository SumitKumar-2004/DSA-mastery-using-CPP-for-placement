//2. Write a program to find the factorial of a number
#include <iostream>
using namespace std;
int main()
{
   int n = 5, fact = 1;
   for (int i = 1; i <= n; i++)
   {
      fact *= i;
   }
   cout << "Factorial of " << n << " is " << fact;
}

// Time Complexity : o(n)
// Space Complexity : o(1)