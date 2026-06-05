/*
First, I count the frequency of every character in the magazine. Then I traverse the ransom note. For each character, I check if it is available in the frequency array. If not, I return false. Otherwise, I consume one occurrence by decrementing its frequency. If I finish traversing the ransom note, all required characters were available, so I return true. Time complexity is O(n + m) and space complexity is O(1).
*/

#include <bits/stdc++.h>
using namespace std;
bool canConstruct(string ransomNote, string magazine)
{
   int freq[26] = {0};
   for (char ch : magazine)
   {
      freq[ch - 'a']++;
   }
   for (char ch : ransomNote)
   {
      if (freq[ch - 'a'] == 0)
      {
         return false;
      }
      freq[ch - 'a']--;
   }
   return true;
}

int main()
{
   string ransomNote = "aa", magazine = "aab";
   if (canConstruct(ransomNote, magazine))
   {
      cout << "True";
   }
   else
   {
      cout << "False";
   }
   return 0;
}