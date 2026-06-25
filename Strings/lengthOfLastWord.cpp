#include<bits/stdc++.h>
using namespace std;
int main(){
   string str = "   fly me   to   the moon  ";
   int i = str.size() - 1;

   //we check from the end of the string

   //check for spaces
   while(i >=0 && str[i] == ' '){
      i--;
}
   int count = 0;
   //if no white space we count the length
   while(i >= 0 && str[i] != ' '){
      count++;
      i--;
   
   }
   cout<<"The length of last word is :"<<count;
}