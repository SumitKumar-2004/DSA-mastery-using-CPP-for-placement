#include <bits/stdc++.h>
using namespace std;

// Function to merge overlapping intervals
vector<vector<int>> mergeIntervals(vector<vector<int>> &arr)
{
   // Get the number of intervals
   int n = arr.size();

   // Sort intervals based on their starting point
   sort(arr.begin(), arr.end());

   // Vector to store merged intervals
   vector<vector<int>> ans;

   // Traverse all intervals
   for (int i = 0; i < n; i++)
   {
      // If ans is empty OR current interval does not overlap
      // with the last merged interval, add it directly
      if (ans.empty() || arr[i][0] > ans.back()[1])
      {
         ans.push_back(arr[i]);
      }
      else
      {
         // Overlapping interval found
         // Update the ending point of the last interval
         // with the maximum ending value
         ans.back()[1] = max(ans.back()[1], arr[i][1]);
      }
   }

   // Return the merged intervals
   return ans;
}

int main()
{
   // Input intervals
   vector<vector<int>> intervals = {
       {1, 3},
       {2, 6},
       {8, 10},
       {15, 18}
   };

   // Merge overlapping intervals
   vector<vector<int>> res = mergeIntervals(intervals);

   // Print merged intervals
   for (auto it : res)
   {
      for (auto val : it)
      {
         cout << val << " ";
      }
      cout << endl;
   }

   return 0;
}