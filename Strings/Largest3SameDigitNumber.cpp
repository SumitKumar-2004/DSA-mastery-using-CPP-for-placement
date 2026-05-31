#include <bits/stdc++.h>
using namespace std;
int main()
{
   string num = "6777133339";
   string maxNum;
   for (int i = 0; i < num.size() - 2; i++)
   {
      if (num[i] == num[i + 1] && num[i + 1] == num[i + 2])
      {
         string curr = num.substr(i, 3);
         maxNum = max(maxNum, curr);
      }
   }
   cout << maxNum;
   return 0;
}