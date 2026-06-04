// Sum of Beauty of all Substring
#include <bits/stdc++.h>
using namespace std;
int BeautyString(string s)
{
   int n = s.size();
   int sum = 0;
   for (int i = 0; i < n; i++)
   {
      unordered_map<char, int> freq;
      for (int j = i; j < n; j++)
      {
         freq[s[j]]++;

         int maxi = INT_MIN;
         int mini = INT_MAX;

         for (auto it : freq)
         {
            maxi = max(maxi, it.second);
            mini = min(mini, it.second);
         }
         sum += (maxi - mini);
      }
   }
   return sum;
}
int main()
{
   string s = "aabcb";
   int ans = BeautyString(s);
   cout << "Sum is : " << ans;
   return 0;
}