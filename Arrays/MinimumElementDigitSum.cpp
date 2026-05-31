// Minimum Element After Replacement With Digit Sum
#include <bits/stdc++.h>
using namespace std;

int digitSum(int n)
{
   int sum = 0;
   while (n > 0)
   {
      sum += n % 10;
      n /= 10;
   }
   return sum;
}

int minElement(vector<int> nums)
{
   int minSum = INT_MAX;
   for (int i = 0; i < nums.size(); i++)
   {
      int sum = digitSum(nums[i]);
      minSum = min(minSum, sum);
   }
   return minSum;
}

int main()
{
   vector<int> nums = {1012, 12, 13, 14};
   int ans = minElement(nums);
   cout << ans;
   return 0;
}
