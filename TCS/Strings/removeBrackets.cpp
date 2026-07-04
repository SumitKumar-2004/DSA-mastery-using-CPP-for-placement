//Remove brackets
#include<bits/stdc++.h>
using namespace std;
int main(){
   string str = "a+((b-c)+d)";
   string res = "";
   for(char ch : str){
      if(ch == '(' || ch == ')'){
         continue;
      }
      res += ch;
   }
   cout<<res;
}