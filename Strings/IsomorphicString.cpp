#include <bits/stdc++.h>
using namespace std;
int main()
{
   string s = "title";
   string t = "paper";
   int m1[256] = {0};
   int m2[256] = {0};
   for (int i = 0; i < s.size(); i++)
   {
      if (m1[s[i]] != m2[t[i]])
      {
         cout << "Not Isomorphic string";
         return 0;
      }

      m1[s[i]] = i + 1;
      m2[t[i]] = i + 1;
   }

   cout << "Isomorphic string";
   return 0;
}