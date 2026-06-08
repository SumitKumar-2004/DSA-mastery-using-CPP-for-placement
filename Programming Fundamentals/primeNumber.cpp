#include<bits/stdc++.h>
using namespace std;
int main(){
   int n = 7;
   int count = 0;
   for(int i=1;i<=n;i++){
      if(n%i == 0){
         count++;
      }
   }
   if(count == 2){
      cout<<n<<" is a prime number";
   }else{
      cout<<n<<" is not a prime number.";
   }
}