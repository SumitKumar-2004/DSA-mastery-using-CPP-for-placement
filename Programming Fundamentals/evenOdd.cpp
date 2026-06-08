//1. Write a program to check whether a number is even or odd.
#include <iostream>
using namespace std;
int main()
{
   int n = 341;
   if (n % 2 == 0)
   {
      cout << n << " is even.";
   }
   else
   {
      cout << n << " is odd.";
   }
}



// Time Complexity: O(1)
// Space Complexity: O(1)