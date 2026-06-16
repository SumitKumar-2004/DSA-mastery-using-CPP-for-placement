#include<bits/stdc++.h>
using namespace std;
string removeVowels(string str){
   string ans = "";
   for(int i=0;i<str.size();i++){
      if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u'){
         ans += str[i];
      }
   }
   return ans;
}
string removeSpaces(string str){
   string ans = "";
   for(int i=0;i<str.size();i++){
      if(str[i] != ' '){
         ans += str[i];
      }
   }
   return ans;
}
int main(){
   string str = "My name is Sumit Kumar.";
   cout<<removeSpaces(str)<<endl;
   cout<<removeVowels(str);
}
