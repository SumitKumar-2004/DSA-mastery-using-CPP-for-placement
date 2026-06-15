#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n, sum = 0;
   cout << "Enter a num : ";
   cin >> n;
   while (n > 0)
   {
      int digit = n % 10;
      sum += digit;
      n /= 10;
   }
   cout << "Sum of digit is :" << sum;
}