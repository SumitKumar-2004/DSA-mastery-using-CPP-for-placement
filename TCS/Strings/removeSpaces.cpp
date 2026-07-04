//Remove spaces from a string
#include<bits/stdc++.h>
using namespace std;
int main(){
   string s = "My name is sumit kumar";
   string res = "";
   for(char ch : s){
      if(ch == ' '){
         continue;
      }
      res += ch;
   }
   cout<<res;
}