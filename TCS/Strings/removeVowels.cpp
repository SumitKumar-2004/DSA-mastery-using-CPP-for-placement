//Remove vowels from a string
#include<bits/stdc++.h>
using namespace std;
int main(){
   string s = "Sumit Kumar";
  string res = "";
  for(char ch : s){
   char lower = tolower(ch);
   if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
      continue;
   }
   res += ch;
  }
  cout<<res;
   
}