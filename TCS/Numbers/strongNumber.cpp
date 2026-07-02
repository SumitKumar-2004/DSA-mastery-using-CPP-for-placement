//145 = 1! + 4! + 5!
#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
   int fact = 1;
   for (int i = 1; i <= n; i++)
   {
      fact *= i;
   }
   return fact;
}
int strongNumber(int num){
   int sum = 0;
   while (num > 0)
   {
      int digit = num % 10;
      sum = sum + factorial(digit);
      num /= 10;
   }
   return sum;
}
int main(){
   int n = 145;
   int answer = strongNumber(n);
   if (answer == n && n != 0)
   {
      cout<<"Yes";
   }else{
      cout<<"NO";
   }
}