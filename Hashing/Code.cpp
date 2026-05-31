#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cout << "Enter the size of array : ";
   cin >> n;
   cout << "Enter the " << n << " elements of arrays\n";
   int arr[n];
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }
   // precompute
   int hash[13] = {0};
   for (int i = 0; i < n; i++)
   {
      hash[arr[i]] += 1;
   }

   int q;
   cout << "Enter the number of queries to seach : ";
   cin >> q;
   cout << "Enter the " << q << " queiers for searching using hashing.";
   while (q--)
   {
      int number;
      cin >> number;
      // fecth
      cout << hash[number] << endl;
   }
   return 0;
}