// Majority Element II
// Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.
#include <bits/stdc++.h>
using namespace std;
vector<int> majorityElement(vector<int> &nums)
{
   int cnt1 = 0, cnt2 = 0;
   int el1 = INT_MIN;
   int el2 = INT_MIN;

   for (int i = 0; i < nums.size(); i++)
   {
      if (cnt1 == 0 && nums[i] != el2)
      {
         cnt1 = 1;
         el1 = nums[i];
      }
      else if (cnt2 == 0 && nums[i] != el1)
      {
         cnt2 = 1;
         el2 = nums[i];
      }
      else if (el1 == nums[i])
      {
         cnt1++;
      }
      else if (el2 == nums[i])
      {
         cnt2++;
      }
      else
      {
         cnt1--;
         cnt2--;
      }
   }
   // manual check

   vector<int> ls;
   cnt1 = 0, cnt2 = 0;
   for (int i = 0; i < nums.size(); i++)
   {
      if (el1 == nums[i])
      {
         cnt1++;
      }
      else if (el2 == nums[i])
      {
         cnt2++;
      }
   }
   int mini = (int)(nums.size() / 3) + 1;
   if (cnt1 >= mini)
   {
      ls.push_back(el1);
   }
   if (cnt2 >= mini)
   {
      ls.push_back(el2);
   }
   sort(ls.begin(), ls.end());
   return ls;
}

int main()
{
   vector<int> nums = {1, 1, 1, 1, 3, 2, 2, 2};
   vector<int> ans = majorityElement(nums);
   for (auto it : ans)
   {
      cout << it << " ";
   }
}