//Remove special char from a string
#include<bits/stdc++.h>
using namespace std;
int main(){
   string str = "take12% *&u ^$#forward";
   string res = "";
   for(char ch : str){
      if((ch >= 'a' && ch <='z') || (ch >= 'A' && ch <= 'Z')){
         res +=ch;
      }
   }
   cout<<res;
}