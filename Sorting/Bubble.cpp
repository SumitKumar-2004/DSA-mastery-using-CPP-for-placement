#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n)
{
   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < n - 1; j++)
      {
         if (arr[j] > arr[j + 1])
         {
            swap(arr[j], arr[j + 1]);
         }
      }
   }
   cout << "After Using Bubble Sort:\n";
   for (int i = 0; i < n; i++)
   {
      cout << arr[i] << " ";
   }
   cout << endl;
}

int main()
{
   int arr[] = {5, 4, 3, 2, 1};
   int n = sizeof(arr) / sizeof(arr[0]);

   cout << "Before bubble sort\n";
   for (int i = 0; i < n; i++)
   {
      cout << arr[i] << " ";
   }
   cout << "\n";
   bubble_sort(arr, n);
   return 0;
}