#include <bits/stdc++.h>
using namespace std;
bool checkPalindrome(string str)
{
   int left = 0;
   int right = str.size() - 1;
   while (left < right)
   {
      if (str[left] != str[right])
      {
         return false;
      }
      left++;
      right--;
   }
   return true;
}
int main()
{
   string str = "madam";
   if (checkPalindrome(str))
   {
      cout << "Palindrome";
   }
   else
   {
      cout << "Not a palindrome";
   }
}