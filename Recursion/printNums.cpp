#include<bits/stdc++.h>
using namespace std;


void printData(int current,int n){
   if(current > n){
      return;
   }
   cout<<current<<"\n";
   printData(current+1,n);
}
void printNums(int n){
   if(n == 1){
      cout<<1;
      return;
   }
   cout<<n<<"\n";
   printNums(n-1);
}
int main(){
   // int n = 1;
   // printNums(n);

   int curr = 5;
   int N = 20;
   printData(curr,N);
   return 0;
}