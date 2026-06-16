#include <bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int> &arr)
{
   int n = arr.size();
   // If array has 0, 1, or 2 elements,
   // all are already valid
   if (n <= 2)
   {
      return n;
   }
   // First two elements are always allowed
   int i = 2;
   for (int j = 2; j < n; j++)
   {
      // Keep current element only if it is
      // different from the element two positions behind
      if (arr[j] != arr[i - 2])
      {
         arr[i] = arr[j];
         i++;
      }
   }
   return i; // New length
}
int main()
{
   vector<int> arr = {1, 1, 1, 2, 2, 3};

   int k = removeDuplicates(arr);

   cout << "New Length = " << k << endl;

   cout << "Modified Array: ";

   for (int i = 0; i < k; i++)
   {
      cout << arr[i] << " ";
   }
   return 0;
}