#include <bits/stdc++.h>
using namespace std;

int main()
{
   // Input array
   vector<int> arr = {2, 5, 1, 3, 0};

   // Stores the largest element found so far
   int largest = INT_MIN;

   // Stores the second largest element found so far
   int secondLargest = INT_MIN;

   // Traverse the complete array
   for (int i = 0; i < arr.size(); i++)
   {
      // If current element is greater than largest
      if (arr[i] > largest)
      {
         // Previous largest becomes second largest
         secondLargest = largest;

         // Update largest element
         largest = arr[i];
      }
      // If current element lies between
      // largest and secondLargest
      else if (arr[i] > secondLargest &&
               arr[i] != largest)
      {
         // Update second largest
         secondLargest = arr[i];
      }
   }
   // Print largest element
   cout << largest << endl;
   // Print second largest element
   cout << secondLargest;
}