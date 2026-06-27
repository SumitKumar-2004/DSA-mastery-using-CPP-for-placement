//Leetcode 231 : Power of two
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n = 16;
   int count = 0;
   while( n > 0){
      if(n & 1){
         count++;
      }
      n = n >> 1;//remove the last bit
   }
   if(count == 1){
      cout<<"True";
   }else{
      cout<<"False";
   }
}