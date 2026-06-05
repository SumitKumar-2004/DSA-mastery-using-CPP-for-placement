//first we count frequency of each char in string
//then we check if any char have freq == 1 we return it index
#include <bits/stdc++.h>
using namespace std;
int firstUniqueCharacter(string s)
{
   unordered_map<char, int> freq;
   for (auto ch : s)
   {
      freq[ch]++;
   }
   for (int i = 0; i < s.size(); i++)
   {
      if (freq[s[i]] == 1)
      {
         return i;
      }
   }
   return -1;
}
int main()
{
   string s = "loveleetcode";
   cout << firstUniqueCharacter(s);
   return 0;
}