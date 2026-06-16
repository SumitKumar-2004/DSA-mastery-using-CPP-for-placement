#include <bits/stdc++.h>
using namespace std;
string revString(string str)
{
   int left = 0;
   int right = str.size() - 1;
   while (left < right)
   {
      swap(str[left], str[right]);
      left++;
      right--;
   }
   return str;
}
int main()
{
   string str = "Dheeraj Kumar";
   cout << revString(str);
   return 0;
}