// Valid Parentheses ->Leetcode 20
#include <bits/stdc++.h>
using namespace std;
bool isValid(string str)
{
   stack<char> st;
   for (char ch : str)
   {
      // open brackets
      if (ch == '(' || ch == '[' || ch == '{')
      {
         st.push(ch);
      }
      else
      {
         // no open brackets
         if (st.empty())
         {
            return false;
         }
         // if matching brackets
         if (ch == ')' && st.top() == '(' || ch == ']' && st.top() == '[' || ch == '}' && st.top() == '{')
         {
            st.pop();
         }
         else
         {
            return false;
         }
      }
   }
   return st.empty();
}
int main()
{
   string str = "(){}";
   if (isValid(str))
   {
      cout << "True";
   }
   else
   {
      cout << "False";
   }
}