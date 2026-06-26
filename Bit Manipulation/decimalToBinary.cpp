#include<bits/stdc++.h>
using namespace std;
int main(){
   int n = 6;
   string binary = "";
   while(n>0){
      int remainder = n % 2;
      binary += remainder + '0';
      n /= 2;
   }
   reverse(binary.begin(),binary.end());
   cout<<binary;
}