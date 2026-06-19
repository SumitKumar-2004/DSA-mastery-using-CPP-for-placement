#include <bits/stdc++.h>
using namespace std;
string removeDuplicates(string s)
{
   stack<char> st;

   for (char ch : s)
   {
      // duplicate found
      if (!st.empty() && st.top() == ch)
      {
         st.pop();
      }
      else
      {
         st.push(ch);
      }
   }
   string ans = "";
   // convert stack to string
   while (!st.empty())
   {
      ans += st.top();
      st.pop();
   }
   // stack gives reverse order
   reverse(ans.begin(), ans.end());
   return ans;
}
int main()
{
   string str = "abbaca";
   cout<<removeDuplicates(str);
}