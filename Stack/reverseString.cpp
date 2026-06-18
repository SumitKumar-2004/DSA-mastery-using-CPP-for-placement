#include <bits/stdc++.h>
using namespace std;
int main()
{
   string str = "Sumit Kumar";
   stack<char> st;
   //push all char in stack
   for (int i = 0; i < str.size(); i++)
   {
      st.push(str[i]);
   }
   string ans = "";
   //pop from end of the stack if it is not empty
   while (!st.empty())
   {
      ans += st.top();
      st.pop();
   }
   //print the reverse of ans
   cout<<ans;
}