#include <bits/stdc++.h>
using namespace std;
string toggleCase(string str)
{
   for (int i = 0; i < str.size(); i++)
   {
      if (str[i] >= 'A' && str[i] <= 'Z')
      {
         str[i] += 32;
      }
      else
      {
         str[i] -= 32;
      }
   }
   return str;
}
int main()
{
   string str = "Hi Sumit Kumar";
   cout << toggleCase(str);
   return 0;
}