#include <bits/stdc++.h>
using namespace std;
vector<int> intersectionArray(vector<int> &arr1, vector<int> &arr2, int n, int m)
{
   set<int> st;
   vector<int> intersectionVector;
   // insert first array elements into the set
   for (int i = 0; i < n; i++)
   {
      st.insert(arr1[i]);
   }

   // check common elements from second array

   for (int i = 0; i < m; i++)
   {
      if (st.find(arr2[i]) != st.end())
      {
         intersectionVector.push_back(arr2[i]);

         st.erase(arr2[i]);
      }
   }

   return intersectionVector;
}

int main()
{

   vector<int> arr1 = {1, 1, 2, 3, 4};
   vector<int> arr2 = {2, 3, 5};

   int n = arr1.size();
   int m = arr2.size();

   vector<int> res = intersectionArray(arr1, arr2, n, m);

   for (auto it : res)
   {
      cout << it << " ";
   }
}