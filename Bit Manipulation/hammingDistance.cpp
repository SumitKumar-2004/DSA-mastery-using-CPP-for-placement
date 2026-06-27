//Leetcode : 461
#include<bits/stdc++.h>
using namespace std;
int main(){
   int x = 1,y = 4;
   int ans = x ^ y;
   int count = 0;
   while( ans > 0){
      if(ans & 1){
         count++;
      }
      ans = ans >> 1;
   }
   cout<<count;
}