//Count the number of 1's in a bit
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n = 13;//1101
   int count  = 0;
   while(n > 0){
      if( n & 1){//is the last bit 1
         count++;
      }
      n = n >> 1;//remove the last bit
   }
   cout<<count;
}