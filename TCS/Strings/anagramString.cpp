#include<bits/stdc++.h>
using namespace std;
int main(){
   string str1 = "ABC",str2 = "BAC";
   if(str1.length() != str2.length()){
      cout<<"False";
   }
   int freq[26] = {0};
   for(char ch : str1){
      freq[ch - 'A']++;
   }
   for(char ch : str2){
      freq[ch - 'A']--;
   }
   for(int i=0;i<26;i++){
      if(freq[i] != 0){
         cout<<"False";
      }
   }
   cout<<"True";
}