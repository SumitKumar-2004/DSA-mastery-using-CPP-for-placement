#include <bits/stdc++.h>
using namespace std;
int myAtoi(string s)
{
   int i = 0;
   int n = s.size();

   // Step 1: Skip leading spaces
   while (i < n && s[i] == ' ')
   {
      i++;
   }

   // Step 2: Check sign
   int sign = 1;
   if (i < n && (s[i] == '+' || s[i] == '-'))
   {
      if (s[i] == '-')
      {
         sign = -1;
      }
      i++;
   }

   // Step 3: Build the number
   long long num = 0;

   while (i < n && isdigit(s[i]))
   {
      num = num * 10 + (s[i] - '0');

      // Step 4: Check overflow
      if (sign * num >= INT_MAX)
      {
         return INT_MAX;
      }

      if (sign * num <= INT_MIN)
      {
         return INT_MIN;
      }

      i++;
   }

   // Step 5: Return result
   return sign * num;
}
int main()
{
   string s;
   cout << "Enter a string: ";
   getline(cin, s);

   cout << "Integer value: " << myAtoi(s) << endl;

   return 0;
}