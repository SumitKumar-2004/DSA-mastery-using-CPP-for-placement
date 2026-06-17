#include <bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int> &nums)
{
   int currentSum = 0;
   int maxSum = INT_MIN;
   int start = 0;      // Current subarray start
   int ansStart = -1;  // Answer start index
   int ansEnd = -1;    // Answer end index
   for(int i = 0; i < nums.size(); i++)
   {
      // If starting a new subarray
      if(currentSum == 0)
      {
         start = i;
      }
      currentSum += nums[i];
      // Found a better answer
      if(currentSum > maxSum)
      {
         maxSum = currentSum;
         ansStart = start;
         ansEnd = i;
      }
      // Negative sum is useless
      if(currentSum < 0)
      {
         currentSum = 0;
      }
   }
   // Print the maximum sum subarray
   cout << "Subarray: ";
   for(int i = ansStart; i <= ansEnd; i++)
   {
      cout << nums[i] << " ";
   }
   cout << endl;
   return maxSum;
}
int main()
{
   vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
   int maxSum = maxSubArray(arr);
   cout << "Maximum Sum = " << maxSum;
}
// KADANE'S ALGORITHM
//
// Trigger Words:
// Maximum Subarray Sum
// Largest Sum Contiguous Subarray
//
// Intuition:
// We keep extending the current subarray as long as
// it is beneficial.
//
// If the running sum becomes negative,
// discard it because a negative sum will only
// reduce future subarray sums.
//
// Algorithm:
//
// 1. Initialize:
//      currentSum = 0
//      maxSum = INT_MIN
//
// 2. Traverse the array:
//
//      currentSum += arr[i]
//
//      maxSum = max(maxSum, currentSum)
//
//      If currentSum < 0:
//          currentSum = 0
//
// 3. Return maxSum
//
// Example:
//
// arr = {-2,1,-3,4,-1,2,1,-5,4}
//
// Maximum Sum Subarray:
// [4,-1,2,1]
//
// Maximum Sum:
// 6
//
// Time Complexity:
// O(n)
//
// Space Complexity:
// O(1)
//
// Memory Trick:
//
// currentSum += arr[i]
//
// maxSum = max(maxSum, currentSum)
//
// if(currentSum < 0)
//      currentSum = 0
//
// Think:
// "Carry profit while positive,
// throw away loss when negative."