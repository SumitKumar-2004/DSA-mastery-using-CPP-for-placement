#include<bits/stdc++.h>
using namespace std;
int main(){
   string str = "CM";
   int res = 0;
   unordered_map<char,int> roman= {
      {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
   };
   for(int i=0;i<str.size()-1;i++){
      if(roman[str[i]] < roman[str[i+1]]){
         res -= roman[str[i]];
      }else{
         res += roman[str[i]];
      }
   }
   //add the last element
   cout<<res+roman[str.back()];
}