#include <bits/stdc++.h>
using namespace std;

// Function to find sum of first N natural numbers using formula
int sumOfNaturalNumbers(int N)
{
   // Apply formula directly
   return (N * (N + 1)) / 2;
}

// Driver code
int main()
{
   int N = 15;
   cout << sumOfNaturalNumbers(N) << endl;
   return 0;
}
