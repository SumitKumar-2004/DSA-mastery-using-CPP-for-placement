//Count words of a string
#include<bits/stdc++.h>
using namespace std;
int main(){
   string s = "My name is sumit kumar and i am from mca";
   int wordCount = 0;
   for (int i = 0; i < s.length(); i++)
   {
      if(s[i]  != ' ' &&(i==0 || s[i-1] == ' ')){
         wordCount++;
      }
   }
   cout<<wordCount;
   
}