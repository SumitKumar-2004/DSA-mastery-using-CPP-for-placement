// A username is valid if no character appears more than 2 times.
// Input:  "aabbccd"
// Output: VALID
// Input:  "aaabccd"
// Output: INVALID
#include <bits/stdc++.h>
using namespace std;
int main()
{
   string str = "aabbccd";

   int freq[256] = {0};
   for (char ch : str)
   {
      freq[ch]++;
   }

   bool isValid = true;
   for (int i = 0; i < 256; i++)
   {
      if (freq[i] > 2)
      {
         isValid = false;
         break;
      }
   }
   if (isValid){
      cout << "VALID USERNAME";
   }else{
      cout << "INVALID USERNAME";
   }
}