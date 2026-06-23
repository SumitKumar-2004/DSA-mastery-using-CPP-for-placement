//Leetcode : 2390 Removes stars from a string
#include<bits/stdc++.h>
using namespace std;
string removeStars(string s){
   //create a stack
   stack<char> st;
   for(int i=0;i<s.size();i++){
      //if char not equal to star we have to push into the stack
      if(s[i] != '*'){
         st.push(s[i]);
      }else{
         //else we have to pop the top of the stack
         st.pop();
      } 
   }
   string ans = "";
   while(!st.empty()){
      ans += st.top();
      st.pop();
   }
   //because stack gives string in reverse order
   reverse(ans.begin(),ans.end());
   return ans;
}
int main(){
   string str = "leet**code";
   cout<<removeStars(str);
}