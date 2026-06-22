#include <bits/stdc++.h>
using namespace std;
int main()
{
   string str = "programming";
   int freq[256] = {0};
   for (char ch : str)
   {
      freq[ch]++;
   }
   int maxFreq = 0;
   for (int i = 0; i < 256; i++)
   {
      maxFreq = max(maxFreq, freq[i]);
   }
   cout << "Characters: ";
   for (int i = 0; i < 256; i++)
   {
      if (freq[i] == maxFreq)
      {
         cout << char(i) << " ";
      }
   }
   cout << "\nFrequency: " << maxFreq;
   return 0;
}