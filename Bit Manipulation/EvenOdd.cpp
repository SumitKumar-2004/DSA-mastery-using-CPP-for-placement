//check the number is even and odd 
//method 1 : %2 == 0 even else odd
//method 2 : &1 == 0 even else odd
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n = 12;
   if( n & 1){
      cout<<"Odd";
   }else{
      cout<<"Even";
   }
}
