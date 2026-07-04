//Capitalize first and last chaacter of a string
#include<bits/stdc++.h>
using namespace std;
int main(){
   string str = "My name is sumit kumar.";
   int n = str.length();
   for(int i=0;i<n;i++){
      // first char of a word
      if(i == 0 || str[i-1] == ' '){
         str[i] = toupper(str[i]);
      }
      //last char of a word
      if(i == n - 1 || str[i + 1] == ' '){
         str[i] = toupper(str[i]);
      }
   }
   cout<<str;
}