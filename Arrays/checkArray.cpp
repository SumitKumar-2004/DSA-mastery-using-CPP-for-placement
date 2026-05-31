#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n)
{
   for (int i = 0; i < n; i++)
   {
      for (int j = i + 1; j < n; j++)
      {
         if (arr[j] < arr[i])
         {
            return false;
         }
      }
   }
   return true;
}
bool optimalSorted(int arr[],int n){
   for (int i = 1; i < n; i++)
   {
      if(arr[i] < arr[i - 1]){
         return false;
      }
   }
   return true;
   
}
int main()
{
   int arr[] = {1, 2, 3, 34, 5};
   int n = 5;
   // bool ans = isSorted(arr, n);
   bool ans = optimalSorted(arr,n);
   if (ans)
   {
      cout << "True";
   }
   else
   {
      cout << "False";
   }
   return 0;
}