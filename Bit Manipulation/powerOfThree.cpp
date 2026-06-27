//Leetcode : 326
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n = 26;
   if( n <= 0){
      cout<<"False";
   }
   while(n%3 == 0){
      n /= 3;
   }
   if(n == 1){
      cout<<"true";
   }else{
      cout<<"false";
   }
}