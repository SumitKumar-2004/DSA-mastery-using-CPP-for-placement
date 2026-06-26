#include<bits/stdc++.h>
using namespace std;
int main(){
   int decimal = 17;
   string hexaDecimal = "";
   while(decimal > 0){
      int rem = decimal % 16;
      if(rem < 10){
         hexaDecimal += rem + '0';
      }else{
         hexaDecimal += (rem - 10) + 'A';
      }
      decimal /= 16;
   }
   reverse(hexaDecimal.begin(),hexaDecimal.end());
   cout<<hexaDecimal;
}