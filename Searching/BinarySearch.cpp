#include <bits/stdc++.h>
using namespace std;

// Function to perform Binary Search
int binarySearch(vector<int> &arr, int target)
{
   // Starting index of array
   int left = 0;

   // Last index of array
   int right = arr.size() - 1;

   // Continue searching while valid search space exists
   while (left <= right)
   {
      // Find middle element safely
      // Prevents integer overflow
      int mid = left + (right - left) / 2;

      // If target is found at middle index
      if (arr[mid] == target)
      {
         // Return index where target is found
         return mid;
      }

      // If target is greater than middle element
      else if (target > arr[mid])
      {
         // Ignore left half
         // Search in right half
         left = mid + 1;
      }

      // If target is smaller than middle element
      else
      {
         // Ignore right half
         // Search in left half
         right = mid - 1;
      }
   }

   // Target not found in array
   return -1;
}

int main()
{
   // Sorted array (Binary Search requires sorted data)
   vector<int> arr = {10, 20, 30, 40, 50, 60, 70};

   // Element to search
   int target = 50;

   // Call Binary Search function and print result
   cout << binarySearch(arr, target);

   return 0;
}