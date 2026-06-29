#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n = 5;
   int arr[5][2] = {{1, 2}, {2, 1}, {3, 4}, {4, 5}, {5, 4}};
   unordered_map<int, int> mpp;
   cout << "The symmetric pairs are : ";
   for (int i = 0; i < n; i++)
   {
      int first = arr[i][0];
      int second = arr[i][1];
      // check if {second,first} exsited previosuly
      if (mpp.find(second) != mpp.end() && mpp[second] == first)
      {
         cout << "(" << first << ", " << second << ")" << " ";
      }
      else
      {
         // store {first,second} pairs in the unorered map
         mpp[first] = second;
      }
   }
   return 0;
}