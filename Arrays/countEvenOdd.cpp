#include <bits/stdc++.h>
using namespace std;
int main()
{
   vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
   int evenCount = 0, oddCount = 0;
   for (int i = 0; i < arr.size(); i++)
   {
      if (arr[i] % 2 == 0)
      {
         evenCount++;
      }
      else
      {
         oddCount++;
      }
   }
   cout << "Even count : " << evenCount << "\nOdd Count : " << oddCount;
}
