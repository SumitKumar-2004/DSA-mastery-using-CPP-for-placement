#include <bits/stdc++.h>
using namespace std;
int main()
{
   int N = 36;

   vector<int> res;

   for (int i = 1; i <= N; i++)
   {
      if (N % i == 0)
      {
         res.push_back(i);
      }
   }

   for (int x : res)
   {
      cout << x << " ";
   }

   return 0;
}