#include <bits/stdc++.h>
using namespace std;
int main()
{
   int arr[] = {1, 2, 3, 4, 5};
   int left = 0;
   int right = sizeof(arr) / sizeof(arr[0]) - 1;
   while (left < right)
   {
      swap(arr[left], arr[right]);
      left++;
      right--;
   }
   for (auto it : arr)
   {
      cout << it << " ";
   }
}