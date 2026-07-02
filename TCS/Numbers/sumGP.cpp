#include <bits/stdc++.h>
using namespace std;

// Function to calculate GP sum by generating each term
double gpSum(double a, double r, int n)
{
   // Initialize sum to 0
   double sum = 0;
   // Initialize term to first value
   double term = a;

   // Loop for n terms
   for (int i = 0; i < n; i++)
   {
      // Add current term to sum
      sum += term;
      // Multiply term by ratio to get next term
      term *= r;
   }

   // Return final sum
   return sum;
}

int main()
{
   // Example input
   double a = 2, r = 3;
   int n = 4;

   // Call function and print result
   cout << gpSum(a, r, n) << endl;

   return 0;
}
