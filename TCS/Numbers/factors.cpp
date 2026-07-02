#include<bits/stdc++.h>
using namespace std;
void optimal(int n){
   vector<int> divisiors;
   for(int i=1;i*i<=n;i++){
      if(n%i ==0){
         divisiors.push_back(i);
         if(i != n/i){
            divisiors.push_back(n/i);
         }
      }
   }
   for(auto it:divisiors){
      cout<<it<<" ";
   }
}
void findDivisiors(int n){
   for(int i=1;i<=n;i++){
      if(n % i == 0){
         cout<<i<<" ";
      }
   }
}
int main(){
   int n = 16;
   // findDivisiors(n);
   optimal(n);
}