#include <bits/stdc++.h>
using namespace std;
vector<int> twoSumIndices(vector<int> &arr, int target)
{
   unordered_map<int, int> mp; // Map to store element -> index
   int n = arr.size();
   for (int i = 0; i < n; i++)
   {
      int more = target - arr[i];
      // If complement found, return indices
      if (mp.find(more) != mp.end())
      {
         return {mp[more], i};
      }
      // Store current element and index
      mp[arr[i]] = i;
   }
   return {-1, -1}; // No pair found
}
int main()
{
   vector<int> arr = {2, 6, 5, 8, 11};
   int target = 14;
   vector<int> res = twoSumIndices(arr, target);
   cout << "[" << res[0] << ", " << res[1] << "]\n";

}