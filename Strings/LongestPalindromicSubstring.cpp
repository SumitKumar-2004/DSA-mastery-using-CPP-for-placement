// Longest Valid Palindromic Substring
// eg -> babad in this bab and aba are same size these are the longest substring we have to return
// in this we move pointer in opposite direction starting from the centre of string <- ->
#include <bits/stdc++.h>
using namespace std;
string longestPalindromicSubstring(string s)
{
   int start = 0, maxLen = 1;
   int n = s.size();

   for (int i = 0; i < n; i++)
   {
      // odd length palindrome
      // we place both the left and right pointer at the same point
      int left = i, right = i;
      while (left >= 0 && right <= n && s[left] == s[right])
      {
         if (right - left + 1 > maxLen)
         {
            maxLen = right - left + 1;
            start = left;
         }
         left--;
         right++;
      }
      // even length palindrome
      // we place right pointer after left not at the same place because there are not a single center in even string
      while (left >= 0 && right <= n && s[left] == s[right])
      {
         if (right - left + 1 > maxLen)
         {
            maxLen = right - left + 1;
            start = left;
         }
         left--;
         right++;
      }
   }
   return s.substr(start, maxLen);
}

int main()
{
   string s = "babad";
   string res = longestPalindromicSubstring(s);
   cout << res;
   return 0;
}
