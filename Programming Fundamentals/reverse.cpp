// 4. Write a program to reverse a number.
#include<iostream>
using namespace std;
int main(){
   int n = 123, rev = 0;
   while (n > 0)
   {
      int digit = n % 10; //get the last digit
      rev = rev * 10 + digit;//append digit to reverse
      n /= 10;//remove last digit from n

   }
   cout<<rev;
}


//Time complexity : o(log n)
//Space complexity : o(1)