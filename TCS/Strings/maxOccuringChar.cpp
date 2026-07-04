//Maximum occuring character in a string 
#include<bits/stdc++.h>
using namespace std;
int main(){
   string str = "sumit kumar";
   map<char,int> freq;
   for(char ch : str){
      freq[ch]++;
   }
   int maxFreq = 0;
   char maxChar = '\0';

   for(auto it:freq){
      if(it.second > maxFreq){
         maxFreq = it.second;
         maxChar = it.first;
      }
   }
   cout<<maxChar;
}