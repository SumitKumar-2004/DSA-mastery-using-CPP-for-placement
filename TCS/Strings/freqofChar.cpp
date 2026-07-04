#include<bits/stdc++.h>
using namespace std;
int main(){
   string str = "takeuforward";
   int freq[26] = {0};
   for(char ch : str){
      freq[ch - 'a']++;
   }
   for(int i=0;i<26;i++){
      if(freq[i] != 0){
         cout<<(char)(i+'a')<<"=>"<<freq[i]<<" ";
      }
   }
}