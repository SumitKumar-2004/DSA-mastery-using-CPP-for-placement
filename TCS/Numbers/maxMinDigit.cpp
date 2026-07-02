#include<bits/stdc++.h>
using namespace std;
void findDigit(int n){
   int maxDigit = 0;
   int minDigit = 9;
   while(n > 0){
      int digit = n % 10;

      if(digit > maxDigit){
         maxDigit = digit;
      }
      if(digit < minDigit){
         minDigit = digit;
      }

      n /= 10;
   }
   cout<<"MaxDigit : "<<maxDigit<<"\nMinDigit : "<<minDigit<<endl;
}
int main(){
   int n = 84253;
   findDigit(n);
   return 0;
}