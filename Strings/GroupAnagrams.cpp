/*
Algorithm:
1. Sort each string and use the sorted string as a key.
2. Store original strings having the same key in a hashmap.
3. Anagrams will have the same sorted key.
4. Return all groups from the hashmap.
*/
#include <bits/stdc++.h>
using namespace std;
vector<vector<string>> groupAnagrams(vector<string> &strs)
{
   unordered_map<string, vector<string>> mpp;

   for (string str : strs)
   {
      string key = str;
      sort(key.begin(), key.end());

      mpp[key].push_back(str);
   }

   vector<vector<string>> ans;

   for (auto it : mpp)
   {
      ans.push_back(it.second);
   }

   return ans;
}

int main()
{
   vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};

   vector<vector<string>> res = groupAnagrams(strs);

   for (auto it : res)
   {
      for (auto str : it)
      {
         cout << str << " ";
      }
      cout << endl;
   }
}