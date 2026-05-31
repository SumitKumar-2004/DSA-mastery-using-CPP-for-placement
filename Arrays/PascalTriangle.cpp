#include <bits/stdc++.h>
using namespace std;
// first approach in pascal triangle in which row and col are given we have to find pascal element at that place
long long findPascalElement(int r, int c)
{
   int n = r - 1;
   int k = c - 1;

   long long res = 1;
   for (int i = 0; i < k; i++)
   {
      res = res * (n - i);
      res = res / (i + 1);
   }
   return res;
}
// print the nth row of the pascal triangle
vector<int> generateRow(int N)
{
   vector<int> row;

   // first value of the row is always 1
   int val = 1;
   row.push_back(val);

   for (int i = 1; i < N; i++)
   {
      val = val * (N - i);
      val = val / i;
      row.push_back(val);
   }
   return row;
}
// Given n rows to generate the whole pascal triangle
vector<vector<int>> pascalTriangle(int row)
{
   vector<vector<int>> ans;

   for (int i = 1; i <= row; i++)
   {
      ans.push_back(generateRow(i));
   }
   return ans;
}
int main()
{
   int r = 5, c = 3;
   cout << findPascalElement(r, c) << endl;

   int N = 6;
   vector<int> res = generateRow(N);
   for (auto it : res)
   {
      cout << it << " ";
   }

   int row = 6;
   vector<vector<int>> ans = pascalTriangle(row);
   for (auto it : ans)
   {
      for (auto val : it)
      {
         cout << val << " ";
      }
      cout << endl;
   }
   return 0;
}
