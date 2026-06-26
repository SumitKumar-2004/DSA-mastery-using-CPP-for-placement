/*
A bank stores the transaction IDs of customers in a single integer N. The fraud detection team believes that if any transaction ID contains the digit 0, it indicates an incomplete transaction and should not contribute to the security score.
The security score of a transaction ID is defined as the product of all non-zero digits present in the number.
Your task is to compute the security score.
If all digits are 0, print 0.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n = 5034;
   int prod = 1;
   while(n > 0){
      int digit = n % 10;
      if(digit != 0){
         prod *= digit;
      }
      n /= 10;
   }
   cout<<prod;
}