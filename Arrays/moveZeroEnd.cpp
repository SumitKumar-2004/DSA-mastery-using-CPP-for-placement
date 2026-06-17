#include <bits/stdc++.h>
using namespace std;

// Function to move all zeroes to the end
void moveZero(vector<int> &arr)
{
   // j points to the position where
   // the next non-zero element should be placed
   int j = 0;

   // Traverse the entire array
   for (int i = 0; i < arr.size(); i++)
   {
      // If current element is non-zero
      if (arr[i] != 0)
      {
         // Place the non-zero element at position j
         swap(arr[i], arr[j]);

         // Move j to the next position
         j++;
      }
   }
}

int main()
{
   // Input array containing zeroes
   vector<int> arr = {1, 0, 4, 3, 5, 0, 3, 0, 0, 2, 7};

   // Move all zeroes to the end
   moveZero(arr);

   // Print modified array
   for (int x : arr)
   {
      cout << x << " ";
   }

   return 0;
}