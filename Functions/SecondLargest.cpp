#include <bits/stdc++.h>
using namespace std;
// Function to find second largest element
int secondLargestNumber(vector<int> &arr)
{
   // Store largest element seen so far
   int largest = INT_MIN;
   // Store second largest element seen so far
   int secondLargest = INT_MIN;
   // Traverse complete array
   for (int i = 0; i < arr.size(); i++)
   {
      // If current element is greater than largest
      if (arr[i] > largest)
      {
         // Previous largest becomes second largest
         secondLargest = largest;
         // Update largest
         largest = arr[i];
      }
      // If current element is between largest and secondLargest
      else if (arr[i] > secondLargest && arr[i] != largest)
      {
         // Update second largest
         secondLargest = arr[i];
      }
   }
   return secondLargest;
}
int main()
{
   vector<int> arr = {20, 10, 30, 25, 50};
   cout << secondLargestNumber(arr);
   return 0;
}