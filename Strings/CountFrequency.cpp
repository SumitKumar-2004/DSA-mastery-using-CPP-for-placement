#include <bits/stdc++.h>
using namespace std;
int main()
{
   string s = "sumit kumar";

   unordered_map<char, int> freq;
   for (char ch : s)
   {
      freq[ch]++;
   }
   for (auto it : freq)
   {
      cout << it.first << "->" << it.second << endl;
   }
}