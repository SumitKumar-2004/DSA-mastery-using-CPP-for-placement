#include <bits/stdc++.h>
using namespace std;
void characterFrequency(string str)
{
   int freq[256] = {0};

   // count frequency
   for (int i = 0; i < str.size(); i++)
   {
      freq[str[i]]++;
   }

   // print the frequncy only once
   for (int i = 0; i < str.size(); i++)
   {
      if (freq[str[i]] != 0)
      {
         cout << str[i] << " -> " << freq[str[i]] << "|";
      }
      freq[str[i]] = 0;
   }
}

int main()
{
   string str = "sumit kumar";
   characterFrequency(str);
   return 0;
}