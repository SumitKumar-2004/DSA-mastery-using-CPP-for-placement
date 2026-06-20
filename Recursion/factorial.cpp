#include<bits/stdc++.h>
using namespace std;

int printFact(int n){
   if(n == 0){
      return 1;
   }
   return n * printFact(n-1);
}

int main(){
   int n = 4;
   cout<<printFact(n);
}