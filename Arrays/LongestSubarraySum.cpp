#include <bits/stdc++.h>
using namespace std;
// int longestSubarrayWithSumK(vector<int> &arr, int n, long long k)
// {
//    map<long long, int> prefixSum;
//    long long sum = 0;
//    int maxLen = 0;
//    for (int i = 0; i < n; i++)
//    {
//       sum += arr[i];
//       if (sum == k)
//       {
//          maxLen = max(maxLen, i + 1);
//       }
//       int rem = sum - k;
//       if (prefixSum.find(rem) != prefixSum.end())
//       {
//          int len = i - prefixSum[rem];
//          maxLen = max(maxLen, len);
//       }
//       prefixSum[sum] = i;
//    }
//    return maxLen;
// }

// int main()
// {
//    vector<int> arr = {1, 2, 3, 1, 1, 1, 1};
//    int n = arr.size();
//    int k = 7;
//    int ans = longestSubarrayWithSumK(arr, n, k);
//    cout << ans;
// }

// Longest Subarray with given Sum K(Positives)
int longestSubarray(vector<int> &nums, int k)
{
   int n = nums.size();

   // To store the maximum length of the subarray
   int maxLen = 0;

   // Pointers to mark the start and end of window
   int left = 0, right = 0;

   // To store the sum of elements in the window
   int sum = nums[0];

   // Traverse all the elements
   while (right < n)
   {

      // If the sum exceeds K, shrink the window
      while (left <= right && sum > k)
      {
         sum -= nums[left];
         left++;
      }

      // store the maximum length
      if (sum == k)
      {
         maxLen = max(maxLen, right - left + 1);
      }

      right++;
      if (right < n)
         sum += nums[right];
   }

   return maxLen;
}
int main()
{
   vector<int> nums = {10, 5, 2, 7, 1, 9};
   int k = 15;

   int ans = longestSubarray(nums, k);

   cout << "The length of longest subarray having sum k is: " << ans;

   return 0;
}