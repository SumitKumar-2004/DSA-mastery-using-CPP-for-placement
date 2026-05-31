#include <bits/stdc++.h>
using namespace std;
int maxConsecutive(vector<int> &arr, int n)
{
   int count = 0;
   int maxCount = 0;

   for (int i = 0; i < n; i++)
   {
      if (arr[i] == 1)
      {
         count++;
      }
      else
      {
         count = 0;
      }
      maxCount = max(maxCount, count);
   }
   return maxCount;
}

int main()
{
   vector<int> arr = {1, 1, 0, 1, 1, 1,1,0,0,0,0,0,1,1,1,1,1,1,1,1};
   int n = arr.size();
   int ans = maxConsecutive(arr, n);
   cout<<ans;
}