// 1. If lengths of both strings are different, return false.
// 2. Create a frequency array of size 26 and initialize with 0.
// 3. Traverse both strings together:
//       - Increment count for characters of s.
//       - Decrement count for characters of t.
// 4. After traversal, if all frequencies are 0,
//    both strings contain the same characters with the same frequency.
// 5. Return true if all counts are 0, otherwise false.

#include <bits/stdc++.h>
using namespace std;
bool isAnangram(string s, string t)
{
   if (s.size() != t.size())
   {
      return false;
   }
   int freq[26] = {0};
   for (int i = 0; i < s.size(); i++)
   {
      freq[s[i] - 'a']++;
      freq[t[i] - 'a']--;
   }

   for (auto count : freq)
   {
      if (count == 0)
      {
         return true;
      }
   }
   return false;
}
int main()
{
   string s = "anagram", t = "nagrama";
   
   if(isAnangram(s,t)){
      cout<<"Anagram string";
   }else{
      cout<<"Not a anagram string";
   }
   return 0;
}