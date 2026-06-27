// Leetcode : 136
#include <bits/stdc++.h>
using namespace std;
int main()
{
   vector<int> arr = {2, 2, 1,3,1};
   int res = 0;
   for (int i = 0; i < arr.size(); i++)
   {
      res ^= arr[i];
   }
   cout << res;
}