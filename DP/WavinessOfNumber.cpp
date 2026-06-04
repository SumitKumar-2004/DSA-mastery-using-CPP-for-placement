// Leetcode : 3751. Total Waviness of Numbers in Range I
// We have to find the total waviness of all numbers in the given range.
// Waviness = total number of peaks + valleys in a number.
// Peak   -> left < current > right
// Valley -> left > current < right
// First and last digits can never be peak or valley because
// they do not have both left and right neighbours.

#include <bits/stdc++.h>
using namespace std;

int waviness(int num)
{
   // Convert number into string so that we can access digits easily
   string s = to_string(num);

   int count = 0;

   // Start from index 1 and go till second last digit
   // because first and last digit cannot be peak or valley
   for (int i = 1; i < s.size() - 1; i++)
   {
      // Peak condition
      // Current digit is greater than both neighbours
      if (s[i] > s[i - 1] && s[i] > s[i + 1])
      {
         count++;
      }

      // Valley condition
      // Current digit is smaller than both neighbours
      else if (s[i] < s[i - 1] && s[i] < s[i + 1])
      {
         count++;
      }
   }

   // Return total waviness of current number
   return count;
}

int totalWavines(int num1, int num2)
{
   int ans = 0;

   // Traverse every number in the range
   for (int num = num1; num <= num2; num++)
   {
      // Find waviness of current number
      // and add it to the final answer
      ans += waviness(num);
   }

   return ans;
}

int main()
{
   int num1 = 120, num2 = 130;

   int res = totalWavines(num1, num2);

   cout << res;

   return 0;
}