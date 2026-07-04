//Change every letter with next lexicographic alphabet
#include<bits/stdc++.h>
using namespace std;
int main(){
   string s = "abcxyz";
   for(char &ch : s){
      ch = tolower(ch);
      if(ch == 'z'){
         ch = 'a';
      }else{
         ch++;
      }
   }
   cout<<s;
}