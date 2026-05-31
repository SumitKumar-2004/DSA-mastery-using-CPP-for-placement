#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &arr, int n)
{
   int sum = ((n + 1) * (n + 2)) / 2;
   int totalSum = 0;
   for (int i = 0; i < n; i++)
   {
      totalSum += arr[i];
   }

   int miss = sum - totalSum;
}
int main()
{
   vector<int> arr = {1, 2, 3, 4, 5, 7};
   int n = arr.size();
   int ans = missingNumber(arr, n);
   cout << ans;
}