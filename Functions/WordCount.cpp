#include <bits/stdc++.h>
using namespace std;
int countWords(string str)
{
   int count = 1;
   for (int i = 0; i < str.size(); i++)
   {
      if (str[i] == ' ')
      {
         count++;
      }
   }
   return count;
}
int main()
{
   string str = "My name is Sumit Kumar";
   cout << countWords(str);
   return 0;
}