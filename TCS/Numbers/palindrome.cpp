#include<bits/stdc++.h>
using namespace std;
int main(){
   int n = 4554;
   int original = n;
   int rev = 0;
   while(n > 0){
      int rem = n % 10;
      rev = rev * 10 + rem;
      n /= 10;
   }
   if(rev == original){
      cout<<"Palindrome";
   }else{
      cout<<"Not a palindrome";
   }
}