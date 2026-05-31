#include <bits/stdc++.h>
using namespace std;
// int main()
// {
//    vector<int> arr = {1, 2, -4, -5,-3,6};
//    int n = arr.size();
//    vector<int> ans(n, 0);
//    int posIndex = 0, negIndex = 1;
//    for (int i = 0; i < n; i++)
//    {
//       if (arr[i] < 0)
//       {
//          ans[negIndex] = arr[i];
//          negIndex += 2;
//       }
//       else
//       {
//          ans[posIndex] = arr[i];
//          posIndex += 2;
//       }
//    }
//    for (auto it : ans)
//    {
//       cout << it << " ";
//    }
//    return 0;
// }
// when positive count != negative count
int main()
{
   vector<int> arr = {1, 2, -4, -5, -3, 6,-2};
   int n = arr.size();
   vector<int> pos, neg;

   for (int i = 0; i < n; i++)
   {
      if (arr[i] > 0)
      {
         pos.push_back(arr[i]);
      }
      else
      {
         neg.push_back(arr[i]);
      }
   }
   vector<int> ans;

   int i = 0, j = 0;

   while (i < pos.size() && j < neg.size())
   {
      ans.push_back(pos[i++]);
      ans.push_back(neg[j++]);
   }

   while (i < pos.size())
      ans.push_back(pos[i++]);

   while (j < neg.size())
      ans.push_back(neg[j++]);

   for (auto it : ans)
      cout << it << " ";
}
