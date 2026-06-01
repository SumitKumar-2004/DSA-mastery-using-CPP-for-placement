#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{

   // If vector is empty, return empty string
   if (strs.empty())
      return "";

   // Sort all strings
   sort(strs.begin(), strs.end());

   // First and last string after sorting
   string first = strs.front();
   string last = strs.back();

   string ans = "";

   // Compare characters one by one
   for (int i = 0; i < min(first.size(), last.size()); i++)
   {

      // Stop when characters differ
      if (first[i] != last[i])
         break;

      ans += first[i];
   }

   return ans;
}
int main()
{
   vector<string> strs = {
       "interview",
       "internet",
       "internal",
       "interval"};

   cout << "Longest Common Prefix: " << longestCommonPrefix(strs)
        << endl;

   return 0;
}