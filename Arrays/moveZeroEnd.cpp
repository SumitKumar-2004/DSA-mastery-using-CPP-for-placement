#include <bits/stdc++.h>
using namespace std;
void moveZero(vector<int> &arr, int n)
{
   int j = -1;
   for (int i = 0; i < n; i++)
   {
      if (arr[i] == 0)
      {
         j = i;
         break;
      }
   }
   for (int i = j + 1; i < n; i++)
   {
      if (arr[i] != 0)
      {
         swap(arr[i], arr[j]);
         j++;
      }
   }
}
int main()
{
   vector<int> arr = {1, 0, 4, 3, 5, 0, 3, 0, 0, 2, 7};
   int n = arr.size();
   moveZero(arr, n);
   for (int x : arr)
   {
      cout << x << " ";
   }
}