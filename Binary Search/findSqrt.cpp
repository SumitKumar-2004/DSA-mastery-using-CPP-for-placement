#include<bits/stdc++.h>
using namespace std;
int main(){
   int x = 8;
   int left = 1;
   int right = x / 2;
   int ans = 0;
   if(x < 2){
      cout<<x;
   }
   while(left <= right){
      long long mid = left + (right - left) / 2;
      if(mid * mid <= x){
         ans = mid;
         left = mid + 1;
      }else{
         right = mid - 1;
      }
   }
   cout<<ans;
}