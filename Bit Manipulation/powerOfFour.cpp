#include<bits/stdc++.h>
using namespace std;
int main(){
   int n = 16;
   while(n <= 0){
      cout<<"False";
   }
   while( n % 4 == 0){
      n/=4;
   }
   if(n == 1){
      cout<<"True";
   }else{
      cout<<"False";
   }
}