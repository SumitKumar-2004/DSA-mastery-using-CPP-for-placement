// Return the count and char of a most frequent char in a string
#include <bits/stdc++.h>
using namespace std;
int main()
{
   string str = "banana";
   int freq[256] = {0};
   for (char ch : str)
   {
      freq[ch]++;
   }
   int freqCount = 0;
   char ans;
   for (int i = 0; i < str.size(); i++)
   {
      if (freq[str[i]] > freqCount)
      {
         freqCount = freq[str[i]];
         ans = str[i];
      }
   }
   cout << "Character: " << ans << endl;
   cout << "Frequency: " << freqCount << endl;
   return 0;
}