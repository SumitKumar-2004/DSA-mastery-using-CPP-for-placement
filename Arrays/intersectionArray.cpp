//Common elements in both arrays
#include <bits/stdc++.h>
using namespace std;

vector<int> intersectionArray(vector<int> &arr1, vector<int> &arr2, int n, int m)
{
   unordered_map<int, int> mpp; // stores frequency of elements of arr1
   vector<int> ans;             // stores intersection elements

   // Count frequency of each element in arr1
   for (auto it : arr1)
   {
      mpp[it]++;
   }

   // Traverse arr2 and check if element exists in arr1
   for (auto it : arr2)
   {
      if (mpp[it] > 0) // element present in arr1
      {
         ans.push_back(it); // add to answer
         mpp[it]--;         // decrease frequency to avoid extra duplicates
      }
   }
   return ans;
}
int main()
{
   vector<int> arr1 = {1, 1, 2, 3, 4};
   vector<int> arr2 = {2, 3, 5};

   int n = arr1.size();
   int m = arr2.size();

   vector<int> res = intersectionArray(arr1, arr2, n, m);

   // Print intersection elements
   for (auto it : res)
   {
      cout << it << " ";
   }

   return 0;
}

/*
IMPORTANT POINTS:

1. unordered_map<int,int>
   - Key   = array element
   - Value = frequency of that element

2. mpp[it]++
   - Counts occurrences of each element in arr1

3. if(mpp[it] > 0)
   - Checks whether current element of arr2
     is available in arr1

4. mpp[it]--
   - Prevents taking an element more times
     than it appears in arr1

5. Time Complexity:
   O(n + m)

6. Space Complexity:
   O(n)

7. This is optimal for UNSORTED arrays.
*/