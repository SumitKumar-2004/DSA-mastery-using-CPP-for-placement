#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
   // last valid element of nums1
   int i = m - 1;
   // last element of nums2
   int j = n - 1;
   // last position of nums1
   int k = m + n - 1;
   // compare elements from back
   while (i >= 0 && j >= 0)
   {
      // if nums1 element are bigger
      if (nums1[i] > nums2[j])
      {
         nums1[k] = nums1[i];
         i--;
      }
      else
      {
         nums1[k] = nums2[j];
         j--;
      }
      k--;
   }
   // copy remaining nums2 element
   while (j >= 0)
   {
      nums1[k] = nums2[j];
      j--;
      k--;
   }
}

int main()
{
   vector<int> nums1 = {1, 2, 3, 0, 0, 0};
   int m = 3;
   vector<int> nums2 = {2, 5, 6};
   int n = 3;
   merge(nums1, m, nums2, n);
   for (auto it : nums1)
   {
      cout << it << " ";
   }

   return 0;
}